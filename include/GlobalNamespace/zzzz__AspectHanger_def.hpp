#pragma once
// IWYU pragma private; include "GlobalNamespace/AspectHanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AspectHanger)
namespace GlobalNamespace {
struct AspectHanger_AspectRatio;
}
namespace GlobalNamespace {
class ISettingsHanger;
}
namespace GlobalNamespace {
struct LocalizedText_DisplayType;
}
namespace GlobalNamespace {
struct SettingsType;
}
namespace UnityEngine {
struct Resolution;
}
// Forward declare root types
namespace GlobalNamespace {
class AspectHanger;
}
namespace GlobalNamespace {
struct AspectHanger_AspectRatio;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AspectHanger*);
MARK_VAL_T(::GlobalNamespace::AspectHanger_AspectRatio);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AspectHanger*, "", "AspectHanger");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AspectHanger_AspectRatio, "", "AspectHanger/AspectRatio");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AspectHanger/AspectRatio
struct CORDL_TYPE AspectHanger_AspectRatio {
public:
// Declarations
 __declspec(property(get=get_ratio)) float_t  ratio;

/// @brief Method .ctor, addr 0x1803914e0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height) ;

/// @brief Method get_ratio, addr 0x180391560, size 0x1b0, virtual false, abstract: false, final false
inline float_t get_ratio() ;

// Ctor Parameters []
// @brief default ctor
constexpr AspectHanger_AspectRatio() ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isUsable", ty: "bool", modifiers: "", def_value: None }]
constexpr AspectHanger_AspectRatio(int32_t  width, int32_t  height, ::StringW  label, bool  isUsable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5605};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field width, offset: 0x0, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0x4, size: 0x4, def value: None
 int32_t  height;

/// @brief Field label, offset: 0x8, size: 0x8, def value: None
 ::StringW  label;

/// @brief Field isUsable, offset: 0x10, size: 0x1, def value: None
 bool  isUsable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AspectHanger_AspectRatio, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AspectHanger_AspectRatio, height) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AspectHanger_AspectRatio, label) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AspectHanger_AspectRatio, isUsable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AspectHanger_AspectRatio) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AspectHanger::AspectRatio, SettingsType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AspectHanger
class CORDL_TYPE AspectHanger : public ::System::Object {
public:
// Declarations
using AspectRatio = ::GlobalNamespace::AspectHanger_AspectRatio;

/// @brief Field <settingsType>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__settingsType_k__BackingField, put=__cordl_internal_set__settingsType_k__BackingField)) ::GlobalNamespace::SettingsType  _settingsType_k__BackingField;

/// @brief Field <valueIndex>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueIndex_k__BackingField, put=__cordl_internal_set__valueIndex_k__BackingField)) int32_t  _valueIndex_k__BackingField;

/// @brief Field <value>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__value_k__BackingField, put=__cordl_internal_set__value_k__BackingField)) int32_t  _value_k__BackingField;

 __declspec(property(get=get_aspectRatioValue)) ::GlobalNamespace::AspectHanger_AspectRatio  aspectRatioValue;

 __declspec(property(get=get_overflowIndex)) int32_t  overflowIndex;

/// @brief Field overflowLabel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_overflowLabel, put=__cordl_internal_set_overflowLabel)) ::StringW  overflowLabel;

/// @brief Field possibleRatios, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_possibleRatios, put=__cordl_internal_set_possibleRatios)) ::ArrayW<::GlobalNamespace::AspectHanger_AspectRatio>  possibleRatios;

 __declspec(property(get=get_settingsType, put=set_settingsType)) ::GlobalNamespace::SettingsType  settingsType;

/// @brief Field usingOverflow, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_usingOverflow, put=__cordl_internal_set_usingOverflow)) bool  usingOverflow;

 __declspec(property(get=get_value, put=set_value)) int32_t  value;

 __declspec(property(get=get_valueIndex, put=set_valueIndex)) int32_t  valueIndex;

/// @brief Convert operator to "::GlobalNamespace::ISettingsHanger"
constexpr operator  ::GlobalNamespace::ISettingsHanger*() noexcept;

/// @brief Method Apply, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Cycle, addr 0x180390050, size 0xf0, virtual true, abstract: false, final true
inline void Cycle(int32_t  delta) ;

/// @brief Method GetLabel, addr 0x180390140, size 0xa0, virtual false, abstract: false, final false
inline ::StringW GetLabel(::by_ref<::GlobalNamespace::LocalizedText_DisplayType>  displayType) ;

/// @brief Method IsAtMaxValue, addr 0x1803901e0, size 0x80, virtual true, abstract: false, final true
inline bool IsAtMaxValue() ;

/// @brief Method IsAtMinValue, addr 0x180390260, size 0x80, virtual true, abstract: false, final true
inline bool IsAtMinValue() ;

/// @brief Method Load, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Load() ;

/// @brief Method MatchesCurrentValue, addr 0x1803902e0, size 0x1c0, virtual false, abstract: false, final false
inline bool MatchesCurrentValue(::UnityEngine::Resolution  resolution) ;

/// @brief Method MatchesRatio, addr 0x1803904a0, size 0x80, virtual false, abstract: false, final false
static inline bool MatchesRatio(::UnityEngine::Resolution  resolution, ::GlobalNamespace::AspectHanger_AspectRatio  aspectRatio) ;

static inline ::GlobalNamespace::AspectHanger* New_ctor() ;

/// @brief Method RefreshWhichAspectsAreUsable, addr 0x180390520, size 0x1f0, virtual false, abstract: false, final false
inline void RefreshWhichAspectsAreUsable() ;

/// @brief Method ResetToDefault, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ResetToDefault() ;

/// @brief Method Save, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Save() ;

/// @brief Method SetValueByIndex, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetValueByIndex(int32_t  valueIndex) ;

constexpr ::GlobalNamespace::SettingsType const& __cordl_internal_get__settingsType_k__BackingField() const;

constexpr ::GlobalNamespace::SettingsType& __cordl_internal_get__settingsType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__valueIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__valueIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__value_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__value_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_overflowLabel() const;

constexpr ::StringW& __cordl_internal_get_overflowLabel() ;

constexpr ::ArrayW<::GlobalNamespace::AspectHanger_AspectRatio> const& __cordl_internal_get_possibleRatios() const;

constexpr ::ArrayW<::GlobalNamespace::AspectHanger_AspectRatio>& __cordl_internal_get_possibleRatios() ;

constexpr bool const& __cordl_internal_get_usingOverflow() const;

constexpr bool& __cordl_internal_get_usingOverflow() ;

constexpr void __cordl_internal_set__settingsType_k__BackingField(::GlobalNamespace::SettingsType  value) ;

constexpr void __cordl_internal_set__valueIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__value_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_overflowLabel(::StringW  value) ;

constexpr void __cordl_internal_set_possibleRatios(::ArrayW<::GlobalNamespace::AspectHanger_AspectRatio>  value) ;

constexpr void __cordl_internal_set_usingOverflow(bool  value) ;

/// @brief Method .ctor, addr 0x180390710, size 0xd50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_aspectRatioValue, addr 0x180391460, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::AspectHanger_AspectRatio get_aspectRatioValue() ;

/// @brief Method get_overflowIndex, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline int32_t get_overflowIndex() ;

/// @brief Method get_settingsType, addr 0x1803914a0, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::SettingsType get_settingsType() ;

/// @brief Method get_value, addr 0x1803914b0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_value() ;

/// @brief Method get_valueIndex, addr 0x1802e2ba0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_valueIndex() ;

/// @brief Convert to "::GlobalNamespace::ISettingsHanger"
constexpr ::GlobalNamespace::ISettingsHanger* i___GlobalNamespace__ISettingsHanger() noexcept;

/// @brief Method set_settingsType, addr 0x1803914c0, size 0x10, virtual true, abstract: false, final true
inline void set_settingsType(::GlobalNamespace::SettingsType  value) ;

/// @brief Method set_value, addr 0x1803914d0, size 0x10, virtual true, abstract: false, final true
inline void set_value(int32_t  value) ;

/// @brief Method set_valueIndex, addr 0x1802e2f70, size 0x10, virtual true, abstract: false, final true
inline void set_valueIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AspectHanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AspectHanger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AspectHanger(AspectHanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspectHanger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspectHanger(AspectHanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5606};

/// @brief Field possibleRatios, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AspectHanger_AspectRatio>  ___possibleRatios;

/// @brief Field usingOverflow, offset: 0x18, size: 0x1, def value: None
 bool  ___usingOverflow;

/// @brief Field overflowLabel, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___overflowLabel;

/// @brief Field <settingsType>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::SettingsType  ____settingsType_k__BackingField;

/// @brief Field <value>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____value_k__BackingField;

/// @brief Field <valueIndex>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____valueIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AspectHanger, ___possibleRatios) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AspectHanger, ___usingOverflow) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AspectHanger, ___overflowLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AspectHanger, ____settingsType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AspectHanger, ____value_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AspectHanger, ____valueIndex_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AspectHanger) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
