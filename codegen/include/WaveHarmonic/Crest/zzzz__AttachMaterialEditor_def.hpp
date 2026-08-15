#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AttachMaterialEditor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttachMaterialEditor)
// Forward declare root types
namespace WaveHarmonic::Crest {
class AttachMaterialEditor;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::AttachMaterialEditor*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AttachMaterialEditor*, "WaveHarmonic.Crest", "AttachMaterialEditor");
// Dependencies System.Attribute
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.AttachMaterialEditor
class CORDL_TYPE AttachMaterialEditor : public ::System::Attribute {
public:
// Declarations
static inline ::WaveHarmonic::Crest::AttachMaterialEditor* New_ctor(int32_t  order) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  order) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttachMaterialEditor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttachMaterialEditor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttachMaterialEditor(AttachMaterialEditor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttachMaterialEditor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttachMaterialEditor(AttachMaterialEditor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20094};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::AttachMaterialEditor) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
