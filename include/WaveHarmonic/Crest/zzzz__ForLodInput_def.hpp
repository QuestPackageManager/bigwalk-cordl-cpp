#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ForLodInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
CORDL_MODULE_EXPORT(ForLodInput)
namespace System {
class Type;
}
namespace WaveHarmonic::Crest {
struct LodInputMode;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ForLodInput;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ForLodInput*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ForLodInput*, "WaveHarmonic.Crest", "ForLodInput");
// Dependencies System.Attribute, WaveHarmonic.Crest.LodInputMode
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ForLodInput
class CORDL_TYPE ForLodInput : public ::System::Attribute {
public:
// Declarations
/// @brief Field _Mode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Mode, put=__cordl_internal_set__Mode)) ::WaveHarmonic::Crest::LodInputMode  _Mode;

/// @brief Field _Type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Type, put=__cordl_internal_set__Type)) ::System::Type*  _Type;

static inline ::WaveHarmonic::Crest::ForLodInput* New_ctor(::System::Type*  type, ::WaveHarmonic::Crest::LodInputMode  mode) ;

constexpr ::WaveHarmonic::Crest::LodInputMode const& __cordl_internal_get__Mode() const;

constexpr ::WaveHarmonic::Crest::LodInputMode& __cordl_internal_get__Mode() ;

constexpr ::System::Type* const& __cordl_internal_get__Type() const;

constexpr ::System::Type*& __cordl_internal_get__Type() ;

constexpr void __cordl_internal_set__Mode(::WaveHarmonic::Crest::LodInputMode  value) ;

constexpr void __cordl_internal_set__Type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x180c3ff30, size 0x4250, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::WaveHarmonic::Crest::LodInputMode  mode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ForLodInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ForLodInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ForLodInput(ForLodInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ForLodInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ForLodInput(ForLodInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16557};

/// @brief Field _Type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____Type;

/// @brief Field _Mode, offset: 0x18, size: 0x4, def value: None
 ::WaveHarmonic::Crest::LodInputMode  ____Mode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ForLodInput, ____Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ForLodInput, ____Mode) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ForLodInput) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
