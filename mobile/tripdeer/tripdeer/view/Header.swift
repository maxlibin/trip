//
//  Header.swift
//  tripdeer
//
//  Created by Max Li on 20/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI

struct Header: View {
    var body: some View {
        VStack {
          ZStack{
            Rectangle()
              .fill(/*@START_MENU_TOKEN@*/Color.orange/*@END_MENU_TOKEN@*/)
              .frame(height: 200.0)
          }
        }
    }
}

struct Header_Previews: PreviewProvider {
    static var previews: some View {
        Header()
    }
}
