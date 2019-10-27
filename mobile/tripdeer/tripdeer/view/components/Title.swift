//
//  Title.swift
//  tripdeer
//
//  Created by Max Li on 27/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI

struct Title: View {
    var title:String
    var color:Color
    
    var body: some View {
        HStack{
            Text(title)
                .font(.headline)
                .fontWeight(.semibold)
                .foregroundColor(color)
                .multilineTextAlignment(.leading)
                .frame(height: 30.0, alignment: .leading)
            
            Spacer()
        }
    }
}

struct Title_Previews: PreviewProvider {
    static var previews: some View {
        Title(title: "Hello world", color: Color.black)
    }
}

