package com.ma.togglebutton;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.widget.CompoundButton;
import android.widget.CompoundButton.OnCheckedChangeListener;
import android.widget.LinearLayout;
import android.widget.ToggleButton;

public class ToggleButton extends Activity {

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        ToggleButton toggle = (ToggleButton)findViewById(R.id.toggle);
        final LinearLayout linear = (LinearLayout)findViewById(R.id.linear);
        toggle.setOnCheckedChangeListener(new OnCheckedChangeListener()
        {
        	public void onCheckedChangeListener(CompoundButton arg0, boolean arg1){
        		if(arg1){
        			linear.setOrientation(1);
        		}
        		else{
        			linear.setOrientation(0);
        		}
        	}
        });
    }
}
