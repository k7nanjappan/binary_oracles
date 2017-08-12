package com.binaryoracles.rbc;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class Reqeme extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_reqeme);

        Button sub;
        sub = (Button) findViewById(R.id.sub);
        sub.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view)
            {
                Toast.makeText(getApplicationContext(),"Thank you. Donors will contact you soon", Toast.LENGTH_LONG).show();
                 Intent intent = new Intent(Reqeme.this, startview.class);
                startActivity(intent);
            }
        });
    }
}
