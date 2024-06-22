use eframe::egui::{self, OpenUrl};
use native_dialog::{MessageDialog, MessageType};

fn main() {
    let options = eframe::NativeOptions::default();
    eframe::run_native(
        "Project",
        options,
        Box::new(|_cc| Box::new(MyApp::default())),
    );
}

#[derive(Default)]
struct MyApp;

//TODO MOVE TO ANOTHER FILE
impl eframe::App for MyApp {
    fn update(&mut self, ctx: &egui::Context, _frame: &mut eframe::Frame) {
        egui::TopBottomPanel::top("menubar").show(ctx, |ui| {
            egui::menu::bar(ui, |ui| {
                if ui.button("Exit").clicked() {
                    if MessageDialog::new()
                        .set_type(MessageType::Warning)
                        .set_text("Unsaved changes will be lost!")
                        .set_title("Do you want to exit program?")
                        .show_confirm()
                        .unwrap()
                    {
                        std::process::exit(0);
                    }
                }
                if ui.button("Settings").clicked() {
                    println!("IN DEVELOPMENT!")
                }
                if ui.button("About").clicked() {
                    MessageDialog::new()
                        .set_type(MessageType::Info)
                        .set_title("About Program")
                        .set_text("Made by DMK Team.")
                        .show_alert()
                        .unwrap()
                }
                if ui.button("Docummentation").clicked() {
                    webbrowser::open("http://rust-lang.org").unwrap();
                }
            });
        });

        egui::CentralPanel::default().show(ctx, |ui| ui.heading("TEST"));
    }
}
