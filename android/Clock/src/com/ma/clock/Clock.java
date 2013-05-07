package com.ma.clock;

import android.os.Bundle;
import android.os.SystemClock;
import android.app.Activity;
import android.view.Menu;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.Chronometer;
import android.widget.Chronometer.OnChronometerTickListener;
import android.widget.TextView;

public class Clock extends Activity {

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        final Chronometer ch = (Chronometer)findViewById(R.id.ch);
        Button bt = (Button)findViewById(R.id.start);
        final TextView t = (TextView)findViewById(R.id.t);
        bt.setOnClickListener(new OnClickListener()
        {
        	public void onClick(View source){
        		ch.setBase(SystemClock.elapsedRealtime());
        		ch.start();
        	}
        });
        
        ch.setOnChronometerTickListener(new OnChronometerTickListener(){
        	
        	public void onChronometerTick(Chronometer ch){
        		//if(SystemClock.elapsedRealtime()-ch.getBase()>20*1000){
        		//	ch.stop();
        			
        		//}
        		t.setText((int) (SystemClock.elapsedRealtime()-ch.getBase()));
        		
        	}
        });
    }

    
}
