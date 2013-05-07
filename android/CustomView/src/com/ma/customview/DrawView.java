package com.ma.customview;



import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.view.View;

public class DrawView extends View {
	public float currentX = 40;
	public float currentY = 50;
	/**
	 * @param context
	 */
	public DrawView(Context context){
		super(context);
	}
    @Override
    public void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        //��������
        Paint p = new Paint();
        //���û��ʵ���ɫ
        p.setColor(Color.RED);
        //����һ��СԲ
        canvas.drawCircle(currentX  ,currentY , 15 , p);
    }

   
}
