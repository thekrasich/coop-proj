#[derive(Debug, Clone, Copy)]
pub struct ApplicationSettings {
    color_theme: ColorTheme,
    culture_id: CultureId,
    width: u16,
    height: u16,
}

impl ApplicationSettings {
    pub fn new() -> Self {
        Self {
            color_theme: ColorTheme::Dark,
            culture_id: CultureId::EnUS,
            width: 800, // to contants
            height: 600, // to contants
        }
    }

    pub fn with_values(color_theme: ColorTheme, culture_id: CultureId, width: u16, height: u16) -> Self {
        Self {
            color_theme,
            culture_id,
            width,
            height,
        }
    }

    pub fn color_theme(&self) -> ColorTheme {
        self.color_theme
    }

    pub fn culture_id(&self) -> CultureId {
        self.culture_id
    }

    pub fn width(&self) -> u16 {
        self.width
    }

    pub fn height(&self) -> u16 {
        self.height
    }

    pub fn set_color_theme(&mut self, color_theme: ColorTheme) {
        self.color_theme = color_theme;
    }

    pub fn set_culture_id(&mut self, culture_id: CultureId) {
        self.culture_id = culture_id;
    }

    pub fn set_width(&mut self, width: u16) {
        self.width = width;
    }

    pub fn set_height(&mut self, height: u16) {
        self.height = height;
    }
}
