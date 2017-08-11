package com.binaryoracles.rbc;

import android.content.Context;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import android.widget.Spinner;
import android.widget.ArrayAdapter;


public class requestpage extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_requestpage);
        Spinner spinner = (Spinner) findViewById(R.id.bgroup);
        ArrayAdapter<CharSequence> adapter = ArrayAdapter.createFromResource(this,R.array.bgroup, android.R.layout.simple_spinner_dropdown_item);
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner.setAdapter(adapter);

        Spinner spinner2 = (Spinner) findViewById(R.id.urgency);
        ArrayAdapter<CharSequence> adapter2 = ArrayAdapter.createFromResource(this,R.array.urgency, android.R.layout.simple_spinner_dropdown_item);
        adapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner2.setAdapter(adapter2);

        ImageButton ques = (ImageButton) findViewById(R.id.ques);
        final Context context = this;
        ques.setOnClickListener(new View.OnClickListener() {
            @Override
                  public void onClick(View v) {
                Intent intent = new Intent(context, eminfo.class);
                startActivity(intent);
            }


        });

    }
}
