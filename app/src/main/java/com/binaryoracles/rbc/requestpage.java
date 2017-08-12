package com.binaryoracles.rbc;

import android.content.Context;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.ProgressBar;
import android.widget.Spinner;
import android.widget.ArrayAdapter;
import android.widget.Toast;


public class requestpage extends AppCompatActivity implements AdapterView.OnItemSelectedListener {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_requestpage);
        Spinner spinner = (Spinner) findViewById(R.id.bgroup);
        ArrayAdapter<CharSequence> adapter = ArrayAdapter.createFromResource(this,R.array.bgroup, android.R.layout.simple_spinner_dropdown_item);
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner.setAdapter(adapter);

        Spinner spinner2 = (Spinner) findViewById(R.id.urgency);
        spinner2.setOnItemSelectedListener(this);
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

    @Override
    public void onItemSelected(AdapterView<?> parent, View view, int position, long id) {
        String urgency = parent.getItemAtPosition(position).toString();
        String E = "Emergency";
        String I = "Immediate";
        String M = "Moderate";
        if (urgency.equals(E)||urgency.equals(I))

        {
            Button emer;
            emer = (Button) findViewById(R.id.req);
            emer.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    Intent intent = new Intent(requestpage.this, Reqeme.class);
                    startActivity(intent);

                }
            });
        } else if (urgency.equals(M)) {
            Button mod;
            mod = (Button) findViewById(R.id.req);
            mod.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    Intent intent = new Intent(requestpage.this, Reqmod.class);
                    startActivity(intent);
                }

            });
        }

    }
        @Override
        public void onNothingSelected (AdapterView < ? > parent)
        {


        }

}
