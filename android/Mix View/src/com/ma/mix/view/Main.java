package com.ma.mix.view;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.View.OnClickListener;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.view.View;

public class Main extends Activity {
	//����ͼƬ����
	int [] images = new int[]{
			R.drawable.java,
			R.drawable.ee,
			R.drawable.classic,
			R.drawable.ajax,
			R.drawable.xml,
	};
	int currentImg = 0;
	

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        //LinearLayout����
        LinearLayout main = (LinearLayout)findViewById(R.id.root);
        final ImageView image = new ImageView(this);
        //���ImageView ��LinearLayout
        main.addView(image);
        //��ʼ��ʱ��ʾ��һ����Ƭ
        image.setImageResource(images[0]);
        image.setOnClickListener(new OnClickListener()
        {
        	//@Override
        	public void onClick(View v){
        		if(currentImg >=4){
        			currentImg = -1;
        		}
        		//�ı�imageView����ʾ��ͼƬ
        		image.setImageResource(images[++currentImg]);
        	}
        }
        		);
    }

   
}
