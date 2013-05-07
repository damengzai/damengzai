package com.ma.dialog;

import android.os.Bundle;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.AlertDialog.Builder;
import android.content.DialogInterface;
import android.content.DialogInterface.OnClickListener;

import android.view.Menu;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class Dialog extends Activity {

	
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        Button bt = (Button)findViewById(R.id.bt);
    	final Builder builder = new AlertDialog.Builder(this);
    	bt.setOnClickListener(new View.OnClickListener(){
    		public void onClick(View source){
    			builder.setIcon(R.drawable.d);
    			builder.setTitle("自定义普通对话按钮");
    			builder.setMessage("一个简单地提示");
    			builder.setPositiveButton("确定", new OnClickListener(){
    				public void onClick(DialogInterface dialog, int which){
    					EditText show = (EditText)findViewById(R.id.ev);
    					show.setText("用户单击了确定按钮");
    				}
    			});
    			builder.setNegativeButton("取消", new OnClickListener(){
    				public void onClick(DialogInterface dialog, int which){
    					EditText show = (EditText)findViewById(R.id.ev);
    					show.setText("单击了取消按钮");
    				}
    			});
    			
    		}
    	});

    }

}
