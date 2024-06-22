#[derive(Debug, Clone, Copy)]
pub struct VittorioKristiniMathModel {
    diffusion_coefficient_in_live_tissue: f16,
    diffusion_coefficient_in_cancer_tissue: f16,
    adhesion_mesure_coefficient: f16,
    apoptosis_mesure_coefficient: f16,
    mass_transfer_coefficient: f16,
    chemotaxis_coefficient: f16,
}

impl VittorioKristiniMathModel {
    pub fn new() -> Self {
        Self {
            diffusion_coefficient_in_live_tissue: 0.0,
            diffusion_coefficient_in_cancer_tissue: 0.0,
            adhesion_mesure_coefficient: 0.0,
            apoptosis_mesure_coefficient: 0.0,
            mass_transfer_coefficient: 0.0,
            chemotaxis_coefficient: 0.0,
        }
    }

    pub fn with_values(
        diffusion_coefficient_in_live_tissue: f16,
        diffusion_coefficient_in_cancer_tissue: f16,
        adhesion_mesure_coefficient: f16,
        apoptosis_mesure_coefficient: f16,
        mass_transfer_coefficient: f16,
        chemotaxis_coefficient: f16,
    ) -> Self {
        Self {
            diffusion_coefficient_in_live_tissue,
            diffusion_coefficient_in_cancer_tissue,
            adhesion_mesure_coefficient,
            apoptosis_mesure_coefficient,
            mass_transfer_coefficient,
            chemotaxis_coefficient,
        }
    }

    pub fn diffusion_coefficient_in_live_tissue(&self) -> f16 {
        self.diffusion_coefficient_in_live_tissue
    }

    pub fn diffusion_coefficient_in_cancer_tissue(&self) -> f16 {
        self.diffusion_coefficient_in_cancer_tissue
    }

    pub fn adhesion_mesure_coefficient(&self) -> f16 {
        self.adhesion_mesure_coefficient
    }

    pub fn apoptosis_mesure_coefficient(&self) -> f16 {
        self.apoptosis_mesure_coefficient
    }

    pub fn mass_transfer_coefficient(&self) -> f16 {
        self.mass_transfer_coefficient
    }

    pub fn chemotaxis_coefficient(&self) -> f16 {
        self.chemotaxis_coefficient
    }

    pub fn set_diffusion_coefficient_in_live_tissue(&mut self, value: f16) {
        self.diffusion_coefficient_in_live_tissue = value;
    }

    pub fn set_diffusion_coefficient_in_cancer_tissue(&mut self, value: f16) {
        self.diffusion_coefficient_in_cancer_tissue = value;
    }

    pub fn set_adhesion_mesure_coefficient(&mut self, value: f16) {
        self.adhesion_mesure_coefficient = value;
    }

    pub fn set_apoptosis_mesure_coefficient(&mut self, value: f16) {
        self.apoptosis_mesure_coefficient = value;
    }

    pub fn set_mass_transfer_coefficient(&mut self, value: f16) {
        self.mass_transfer_coefficient = value;
    }

    pub fn set_chemotaxis_coefficient(&mut self, value: f16) {
        self.chemotaxis_coefficient = value;
    }
}
