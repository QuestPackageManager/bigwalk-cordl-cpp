#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdPinAudioBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomAudioAssetBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GourdPinAudioBehaviour)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioPicker;
}
namespace GlobalNamespace {
class PropHomeBlock;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
class GourdPinAudioBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GourdPinAudioBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GourdPinAudioBehaviour*, "", "GourdPinAudioBehaviour");
// Dependencies CustomAudioAssetBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GourdPinAudioBehaviour
class CORDL_TYPE GourdPinAudioBehaviour : public ::GlobalNamespace::CustomAudioAssetBehaviour {
public:
// Declarations
/// @brief Field picker, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_picker, put=__cordl_internal_set_picker)) ::UnityW<::GlobalNamespace::AudioPicker>  picker;

/// @brief Field pickerVariant, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pickerVariant, put=__cordl_internal_set_pickerVariant)) ::UnityW<::GlobalNamespace::AudioPicker>  pickerVariant;

/// @brief Field propHomeBlock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHomeBlock, put=__cordl_internal_set_propHomeBlock)) ::UnityW<::GlobalNamespace::PropHomeBlock>  propHomeBlock;

/// @brief Method Excute, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Excute(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome) ;

/// @brief Method GetAsset, addr 0x18037dda0, size 0x120, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioAsset> GetAsset(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome) ;

/// @brief Method GetNumberOfFilledHomes, addr 0x18037dec0, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetNumberOfFilledHomes() ;

static inline ::GlobalNamespace::GourdPinAudioBehaviour* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::AudioPicker> const& __cordl_internal_get_picker() const;

constexpr ::UnityW<::GlobalNamespace::AudioPicker>& __cordl_internal_get_picker() ;

constexpr ::UnityW<::GlobalNamespace::AudioPicker> const& __cordl_internal_get_pickerVariant() const;

constexpr ::UnityW<::GlobalNamespace::AudioPicker>& __cordl_internal_get_pickerVariant() ;

constexpr ::UnityW<::GlobalNamespace::PropHomeBlock> const& __cordl_internal_get_propHomeBlock() const;

constexpr ::UnityW<::GlobalNamespace::PropHomeBlock>& __cordl_internal_get_propHomeBlock() ;

constexpr void __cordl_internal_set_picker(::UnityW<::GlobalNamespace::AudioPicker>  value) ;

constexpr void __cordl_internal_set_pickerVariant(::UnityW<::GlobalNamespace::AudioPicker>  value) ;

constexpr void __cordl_internal_set_propHomeBlock(::UnityW<::GlobalNamespace::PropHomeBlock>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GourdPinAudioBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GourdPinAudioBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GourdPinAudioBehaviour(GourdPinAudioBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GourdPinAudioBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GourdPinAudioBehaviour(GourdPinAudioBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5570};

/// @brief Field propHomeBlock, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHomeBlock>  ___propHomeBlock;

/// @brief Field picker, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioPicker>  ___picker;

/// @brief Field pickerVariant, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioPicker>  ___pickerVariant;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GourdPinAudioBehaviour, ___propHomeBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdPinAudioBehaviour, ___picker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdPinAudioBehaviour, ___pickerVariant) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GourdPinAudioBehaviour) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
