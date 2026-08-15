#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPicker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioPicker)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
struct AudioPicker_PickerInputType;
}
namespace GlobalNamespace {
class AudioPicker_PickerItem;
}
namespace GlobalNamespace {
class ISoundBankable;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioPicker_PickerInputType;
}
namespace GlobalNamespace {
class AudioPicker;
}
namespace GlobalNamespace {
class AudioPicker_PickerItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioPicker_PickerInputType);
MARK_REF_T(::GlobalNamespace::AudioPicker*);
MARK_REF_T(::GlobalNamespace::AudioPicker_PickerItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPicker_PickerInputType, "", "AudioPicker/PickerInputType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPicker*, "", "AudioPicker");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPicker_PickerItem*, "", "AudioPicker/PickerItem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioPicker/PickerInputType
struct CORDL_TYPE AudioPicker_PickerInputType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioPicker_PickerInputType_Unwrapped
enum struct __AudioPicker_PickerInputType_Unwrapped : int32_t {
__E_Int = static_cast<int32_t>(0x0),
__E_Float = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioPicker_PickerInputType_Unwrapped () const noexcept {
return static_cast<__AudioPicker_PickerInputType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioPicker_PickerInputType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioPicker_PickerInputType(int32_t  value__) noexcept;

/// @brief Field Float value: I32(1)
static ::GlobalNamespace::AudioPicker_PickerInputType const Float;

/// @brief Field Int value: I32(0)
static ::GlobalNamespace::AudioPicker_PickerInputType const Int;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioPicker_PickerInputType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioPicker_PickerInputType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPicker/PickerItem
class CORDL_TYPE AudioPicker_PickerItem : public ::System::Object {
public:
// Declarations
/// @brief Field Asset, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Asset, put=__cordl_internal_set_Asset)) ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

/// @brief Field FloatMax, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FloatMax, put=__cordl_internal_set_FloatMax)) float_t  FloatMax;

/// @brief Field FloatMin, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_FloatMin, put=__cordl_internal_set_FloatMin)) float_t  FloatMin;

/// @brief Field IntMax, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_IntMax, put=__cordl_internal_set_IntMax)) int32_t  IntMax;

/// @brief Field IntMin, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_IntMin, put=__cordl_internal_set_IntMin)) int32_t  IntMin;

static inline ::GlobalNamespace::AudioPicker_PickerItem* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Asset() ;

constexpr float_t const& __cordl_internal_get_FloatMax() const;

constexpr float_t& __cordl_internal_get_FloatMax() ;

constexpr float_t const& __cordl_internal_get_FloatMin() const;

constexpr float_t& __cordl_internal_get_FloatMin() ;

constexpr int32_t const& __cordl_internal_get_IntMax() const;

constexpr int32_t& __cordl_internal_get_IntMax() ;

constexpr int32_t const& __cordl_internal_get_IntMin() const;

constexpr int32_t& __cordl_internal_get_IntMin() ;

constexpr void __cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_FloatMax(float_t  value) ;

constexpr void __cordl_internal_set_FloatMin(float_t  value) ;

constexpr void __cordl_internal_set_IntMax(int32_t  value) ;

constexpr void __cordl_internal_set_IntMin(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPicker_PickerItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPicker_PickerItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPicker_PickerItem(AudioPicker_PickerItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPicker_PickerItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPicker_PickerItem(AudioPicker_PickerItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17542};

/// @brief Field Asset, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Asset;

/// @brief Field FloatMin, offset: 0x18, size: 0x4, def value: None
 float_t  ___FloatMin;

/// @brief Field FloatMax, offset: 0x1c, size: 0x4, def value: None
 float_t  ___FloatMax;

/// @brief Field IntMin, offset: 0x20, size: 0x4, def value: None
 int32_t  ___IntMin;

/// @brief Field IntMax, offset: 0x24, size: 0x4, def value: None
 int32_t  ___IntMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioPicker_PickerItem, ___Asset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker_PickerItem, ___FloatMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker_PickerItem, ___FloatMax) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker_PickerItem, ___IntMin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker_PickerItem, ___IntMax) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioPicker_PickerItem) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioAsset, AudioPicker::PickerInputType, AudioPicker::PickerItem
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPicker
class CORDL_TYPE AudioPicker : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
using PickerInputType = ::GlobalNamespace::AudioPicker_PickerInputType;

using PickerItem = ::GlobalNamespace::AudioPicker_PickerItem;

/// @brief Field ClampInput, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClampInput, put=__cordl_internal_set_ClampInput)) bool  ClampInput;

/// @brief Field DefaultAsset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultAsset, put=__cordl_internal_set_DefaultAsset)) ::UnityW<::GlobalNamespace::AudioAsset>  DefaultAsset;

/// @brief Field InputType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_InputType, put=__cordl_internal_set_InputType)) ::GlobalNamespace::AudioPicker_PickerInputType  InputType;

/// @brief Field Items, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Items, put=__cordl_internal_set_Items)) ::ArrayW<::GlobalNamespace::AudioPicker_PickerItem*>  Items;

/// @brief Field _maxFloat, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxFloat, put=__cordl_internal_set__maxFloat)) float_t  _maxFloat;

/// @brief Field _maxInt, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxInt, put=__cordl_internal_set__maxInt)) int32_t  _maxInt;

/// @brief Field _minFloat, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__minFloat, put=__cordl_internal_set__minFloat)) float_t  _minFloat;

/// @brief Field _minInt, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__minInt, put=__cordl_internal_set__minInt)) int32_t  _minInt;

/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr operator  ::GlobalNamespace::ISoundBankable*() noexcept;

static inline ::GlobalNamespace::AudioPicker* New_ctor() ;

/// @brief Method OnEnable, addr 0x180487770, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x180487890, size 0x110, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Pick, addr 0x1804879a0, size 0x170, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioAsset> Pick(float_t  input) ;

/// @brief Method Pick, addr 0x180487b10, size 0x140, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioAsset> Pick(int32_t  input) ;

constexpr bool const& __cordl_internal_get_ClampInput() const;

constexpr bool& __cordl_internal_get_ClampInput() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_DefaultAsset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_DefaultAsset() ;

constexpr ::GlobalNamespace::AudioPicker_PickerInputType const& __cordl_internal_get_InputType() const;

constexpr ::GlobalNamespace::AudioPicker_PickerInputType& __cordl_internal_get_InputType() ;

constexpr ::ArrayW<::GlobalNamespace::AudioPicker_PickerItem*> const& __cordl_internal_get_Items() const;

constexpr ::ArrayW<::GlobalNamespace::AudioPicker_PickerItem*>& __cordl_internal_get_Items() ;

constexpr float_t const& __cordl_internal_get__maxFloat() const;

constexpr float_t& __cordl_internal_get__maxFloat() ;

constexpr int32_t const& __cordl_internal_get__maxInt() const;

constexpr int32_t& __cordl_internal_get__maxInt() ;

constexpr float_t const& __cordl_internal_get__minFloat() const;

constexpr float_t& __cordl_internal_get__minFloat() ;

constexpr int32_t const& __cordl_internal_get__minInt() const;

constexpr int32_t& __cordl_internal_get__minInt() ;

constexpr void __cordl_internal_set_ClampInput(bool  value) ;

constexpr void __cordl_internal_set_DefaultAsset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_InputType(::GlobalNamespace::AudioPicker_PickerInputType  value) ;

constexpr void __cordl_internal_set_Items(::ArrayW<::GlobalNamespace::AudioPicker_PickerItem*>  value) ;

constexpr void __cordl_internal_set__maxFloat(float_t  value) ;

constexpr void __cordl_internal_set__maxInt(int32_t  value) ;

constexpr void __cordl_internal_set__minFloat(float_t  value) ;

constexpr void __cordl_internal_set__minInt(int32_t  value) ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* i___GlobalNamespace__ISoundBankable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPicker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPicker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPicker(AudioPicker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPicker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPicker(AudioPicker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17543};

/// @brief Field InputType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::AudioPicker_PickerInputType  ___InputType;

/// @brief Field DefaultAsset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___DefaultAsset;

/// @brief Field ClampInput, offset: 0x28, size: 0x1, def value: None
 bool  ___ClampInput;

/// @brief Field Items, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioPicker_PickerItem*>  ___Items;

/// @brief Field _minInt, offset: 0x38, size: 0x4, def value: None
 int32_t  ____minInt;

/// @brief Field _maxInt, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____maxInt;

/// @brief Field _minFloat, offset: 0x40, size: 0x4, def value: None
 float_t  ____minFloat;

/// @brief Field _maxFloat, offset: 0x44, size: 0x4, def value: None
 float_t  ____maxFloat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioPicker, ___InputType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker, ___DefaultAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker, ___ClampInput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker, ___Items) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker, ____minInt) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker, ____maxInt) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker, ____minFloat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPicker, ____maxFloat) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioPicker) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
