package com.ma.neon;

import java.util.Timer;
import java.util.TimerTask;

import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.app.Activity;
import android.view.Menu;
import android.widget.TextView;

public class Main extends Activity {
	private int currentColor = 0;
	final int[] colors = new int[]{
			
		R.color.color7,
		R.color.color6,
		R.color.color5,
		R.color.color4,
		R.color.color3,
		R.color.color2,
		R.color.color1,
	};
	final int[] names = new int[]{
			R.id.v1,
			R.id.v2,
			R.id.v3,
			R.id.v4,
			R.id.v5,
			R.id.v6,
			R.id.v7,
	};
	TextView[] views = new TextView[7];
	

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        for(int i = 0;i < 7; i++){
        	views[i] = (TextView)findViewById(names[i]);
        }
        final Handler handler = new Handler(){
        	@Override
        	public void handleMessage(Message msg){
        		//表明消息来自本程序发送
        		if(msg.what == 0x1122){
        			//改变TextView的颜色
        			for(int i = 0 ; i<7-currentColor ; i++){
        				views[i].setBackgroundResource(colors[i+currentColor]);
        			}
        			for(int i = 7-currentColor , j = 0 ;i<7 ; i++ , j++){
        				views[i].setBackgroundResource(colors[j]);
        			}
        		}
        		super.handleMessage(msg);
        	}
        };
        //定义一个线程，改变currentColor值
        new Timer().schedule(new TimerTask() {
        	
        	public void run(){
        		currentColor++;
        		if(currentColor >=6){
        			currentColor = 0;
        		}
        		//发送消息，通知系统改变TextView的颜色
        		Message m = new Message();
        		m.what = 0x1122;
        		handler.sendMessage(m);
        		//
        	}
        }, 0 , 100);
    }

   
}
