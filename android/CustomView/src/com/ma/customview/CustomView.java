package com.ma.customview;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnTouchListener;
import android.widget.LinearLayout;
import android.view.MotionEvent;
import com.ma.customview.R;
import com.ma.customview.R.layout;

public class CustomView extends Activity {
	@Override
	public void onCreate(Bundle savedInstanceState){
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_custom_view);
		//��ȡLinearLayout����
		LinearLayout root = (LinearLayout)findViewById(R.id.root);
		final DrawView draw = new DrawView(this);
		
		draw.setMinimumWidth(300);
		draw.setMinimumHeight(500);
		//draw��touch�¼�
		draw.setOnTouchListener(new OnTouchListener(){
			//@Override
			public boolean onTouch(View arg0, MotionEvent event){
				draw.currentX = event.getX();
				draw.currentY = event.getY();
				//draw����ػ�
				draw.invalidate();
				return true;
			}
		});
		root.addView(draw);
	}

}
