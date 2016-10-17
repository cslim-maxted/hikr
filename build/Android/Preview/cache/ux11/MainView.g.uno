[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static MainView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp5 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp6 = new Fuse.Reactive.FuseJS.Http();
        var temp7 = new Fuse.Triggers.BusyTaskModule();
        var temp8 = new Fuse.FileSystem.FileSystemModule();
        var temp9 = new Fuse.Storage.StorageModule();
        var temp10 = new Polyfills.Window.WindowModule();
        var temp11 = new FuseJS.Globals();
        var temp12 = new FuseJS.Lifecycle();
        var temp13 = new FuseJS.Environment();
        var temp14 = new FuseJS.Base64();
        var temp15 = new FuseJS.Bundle();
        var temp16 = new FuseJS.FileReaderImpl();
        var temp17 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.TextBox();
        temp_Value_inst = new hikr_FuseControlsTextBox_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.TextBox();
        temp1_Value_inst = new hikr_FuseControlsTextBox_Value_Property(temp1, __selector0);
        var temp2 = new Fuse.Controls.TextBox();
        temp2_Value_inst = new hikr_FuseControlsTextBox_Value_Property(temp2, __selector0);
        var temp3 = new Fuse.Controls.TextBox();
        temp3_Value_inst = new hikr_FuseControlsTextBox_Value_Property(temp3, __selector0);
        var temp4 = new Fuse.Controls.TextView();
        temp4_Value_inst = new hikr_FuseControlsTextView_Value_Property(temp4, __selector0);
        var temp18 = new Fuse.Controls.ClientPanel();
        var temp19 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp20 = new Fuse.Controls.StackPanel();
        var temp21 = new Fuse.Controls.Text();
        var temp22 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "name");
        var temp23 = new Fuse.Controls.Text();
        var temp24 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "location");
        var temp25 = new Fuse.Controls.Text();
        var temp26 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "distance");
        var temp27 = new Fuse.Controls.Text();
        var temp28 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "rating");
        var temp29 = new Fuse.Controls.Text();
        var temp30 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "comments");
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp20);
        temp19.Code = "var Observable = require('FuseJS/Observable');\n\n\t\t\tvar name = Observable(\"Tricky Trails\");\n\t\t\tvar location = Observable(\"Lakebed, Utah\");\n\t\t\tvar distance = Observable(10.4)\n\t\t\tvar rating = Observable(4);\n\t\t\tvar comments = Observable(\"This hike was nice and hike -like. Glad I didn't bring a bike. 하이킹이 그렇게 하고 싶나요? 저는 걷는 것 별로 안좋아하고, 자전거를 움직이는 것도 그다지 바라지 않습니다. 그냥 가만히 있으면 저절로 움직이면 좋겠네요. 헐...한글 깨지네요.\");\n\n\t\t\tmodule.exports = {\n\t\t\t\tname: name,\n\t\t\t\tlocation: location,\n\t\t\t\trating: rating,\n\t\t\t\tcomments: comments\n\t\t\t}";
        temp19.LineNumber = 3;
        temp19.FileName = "MainView.ux";
        temp20.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp);
        temp20.Children.Add(temp23);
        temp20.Children.Add(temp1);
        temp20.Children.Add(temp25);
        temp20.Children.Add(temp2);
        temp20.Children.Add(temp27);
        temp20.Children.Add(temp3);
        temp20.Children.Add(temp29);
        temp20.Children.Add(temp4);
        temp21.Value = "name:";
        temp.Bindings.Add(temp22);
        temp23.Value = "location:";
        temp1.Bindings.Add(temp24);
        temp25.Value = "distance:";
        temp2.InputHint = Fuse.Controls.TextInputHint.Decimal;
        temp2.Bindings.Add(temp26);
        temp27.Value = "rating:";
        temp3.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp3.Bindings.Add(temp28);
        temp29.Value = "comments:";
        temp4.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp4.Bindings.Add(temp30);
        __g_nametable.This = this;
        this.Children.Add(temp18);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
