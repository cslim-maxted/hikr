[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> self_Text_inst;
        internal Fuse.Reactive.EventBinding temp_eb0;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Button();
            self_Text_inst = new hikr_FuseControlsButton_Text_Property(self, __selector0);
            var temp = new Fuse.Reactive.DataBinding<string>(self_Text_inst, "name");
            var temp_eb0 = new Fuse.Reactive.EventBinding("chooseHike");
            global::Fuse.Gestures.Clicked.AddHandler(self, temp_eb0.OnEvent);
            self.Bindings.Add(temp);
            self.Bindings.Add(temp_eb0);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
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
        var temp6 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp7 = new Fuse.Reactive.FuseJS.Http();
        var temp8 = new Fuse.Triggers.BusyTaskModule();
        var temp9 = new Fuse.FileSystem.FileSystemModule();
        var temp10 = new Fuse.Storage.StorageModule();
        var temp11 = new Polyfills.Window.WindowModule();
        var temp12 = new FuseJS.Globals();
        var temp13 = new FuseJS.Lifecycle();
        var temp14 = new FuseJS.Environment();
        var temp15 = new FuseJS.Base64();
        var temp16 = new FuseJS.Bundle();
        var temp17 = new FuseJS.FileReaderImpl();
        var temp18 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new hikr_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.TextBox();
        temp1_Value_inst = new hikr_FuseControlsTextBox_Value_Property(temp1, __selector1);
        var temp2 = new Fuse.Controls.TextBox();
        temp2_Value_inst = new hikr_FuseControlsTextBox_Value_Property(temp2, __selector1);
        var temp3 = new Fuse.Controls.TextBox();
        temp3_Value_inst = new hikr_FuseControlsTextBox_Value_Property(temp3, __selector1);
        var temp4 = new Fuse.Controls.TextBox();
        temp4_Value_inst = new hikr_FuseControlsTextBox_Value_Property(temp4, __selector1);
        var temp5 = new Fuse.Controls.TextView();
        temp5_Value_inst = new hikr_FuseControlsTextView_Value_Property(temp5, __selector1);
        var temp19 = new Fuse.Controls.ClientPanel();
        var temp20 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp21 = new Fuse.Controls.StackPanel();
        var temp22 = new Template(this, this);
        var temp23 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "hikes");
        var temp24 = new Fuse.Controls.Text();
        var temp25 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "name");
        var temp26 = new Fuse.Controls.Text();
        var temp27 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "location");
        var temp28 = new Fuse.Controls.Text();
        var temp29 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "distance");
        var temp30 = new Fuse.Controls.Text();
        var temp31 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "rating");
        var temp32 = new Fuse.Controls.Text();
        var temp33 = new Fuse.Reactive.DataBinding<string>(temp5_Value_inst, "comments");
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp20.Code = "var Observable = require('FuseJS/Observable');\n\n\t\t\tvar hike = Observable();\n\n\t\t\tvar name = hike.map(function(x) { return x.name; });\n\t\t\tvar location = hike.map(function(x){ return x.location; });\n\t\t\tvar distance = hike.map(function(x){ return x.distance; });\n\t\t\tvar rating = hike.map(function(x){ return x.rating; });\n\t\t\tvar comments = hike.map(function(x){ return x.comments; });\n\n\t\t\tfunction chooseHike(arg) {\n\t\t\t\thike.value = arg.data;\n\t\t\t}\n\n\t\t\tmodule.exports = {\n\t\t\t    hikes: hikes,\n\n\t\t\t    name: name,\n\t\t\t    location: location,\n\t\t\t    distance: distance,\n\t\t\t    rating: rating,\n\t\t\t    comments: comments,\n\n\t\t\t    chooseHike: chooseHike\n\t\t\t};";
        temp20.LineNumber = 3;
        temp20.FileName = "MainView.ux";
        temp21.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp21.Children.Add(temp);
        temp21.Children.Add(temp24);
        temp21.Children.Add(temp1);
        temp21.Children.Add(temp26);
        temp21.Children.Add(temp2);
        temp21.Children.Add(temp28);
        temp21.Children.Add(temp3);
        temp21.Children.Add(temp30);
        temp21.Children.Add(temp4);
        temp21.Children.Add(temp32);
        temp21.Children.Add(temp5);
        temp.Templates.Add(temp22);
        temp.Bindings.Add(temp23);
        temp24.Value = "name:";
        temp1.Bindings.Add(temp25);
        temp26.Value = "location:";
        temp2.Bindings.Add(temp27);
        temp28.Value = "distance:";
        temp3.InputHint = Fuse.Controls.TextInputHint.Decimal;
        temp3.Bindings.Add(temp29);
        temp30.Value = "rating:";
        temp4.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp4.Bindings.Add(temp31);
        temp32.Value = "comments:";
        temp5.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp5.Bindings.Add(temp33);
        __g_nametable.This = this;
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Value";
}
