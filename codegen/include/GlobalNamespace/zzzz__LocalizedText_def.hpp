#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizedText)
namespace GlobalNamespace {
struct LocalizationLanguage;
}
namespace GlobalNamespace {
struct LocalizedText_DisplayType;
}
namespace GlobalNamespace {
struct LocalizedText_MaterialType;
}
namespace GlobalNamespace {
struct LocalizedText__DelaySetBounds_d__17;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalizedText_DisplayType;
}
namespace GlobalNamespace {
struct LocalizedText_MaterialType;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
struct LocalizedText__DelaySetBounds_d__17;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalizedText_DisplayType);
MARK_VAL_T(::GlobalNamespace::LocalizedText_MaterialType);
MARK_REF_T(::GlobalNamespace::LocalizedText*);
MARK_VAL_T(::GlobalNamespace::LocalizedText__DelaySetBounds_d__17);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizedText_DisplayType, "", "LocalizedText/DisplayType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizedText_MaterialType, "", "LocalizedText/MaterialType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizedText*, "", "LocalizedText");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizedText__DelaySetBounds_d__17, "", "LocalizedText/<DelaySetBounds>d__17");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalizedText/MaterialType
struct CORDL_TYPE LocalizedText_MaterialType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocalizedText_MaterialType_Unwrapped
enum struct __LocalizedText_MaterialType_Unwrapped : int32_t {
__E_Transparent = static_cast<int32_t>(0x0),
__E_Cutout = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocalizedText_MaterialType_Unwrapped () const noexcept {
return static_cast<__LocalizedText_MaterialType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocalizedText_MaterialType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LocalizedText_MaterialType(int32_t  value__) noexcept;

/// @brief Field Cutout value: I32(1)
static ::GlobalNamespace::LocalizedText_MaterialType const Cutout;

/// @brief Field Transparent value: I32(0)
static ::GlobalNamespace::LocalizedText_MaterialType const Transparent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5013};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedText_MaterialType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizedText_MaterialType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalizedText/DisplayType
struct CORDL_TYPE LocalizedText_DisplayType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocalizedText_DisplayType_Unwrapped
enum struct __LocalizedText_DisplayType_Unwrapped : int32_t {
__E_Key = static_cast<int32_t>(0x0),
__E_RawValue = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocalizedText_DisplayType_Unwrapped () const noexcept {
return static_cast<__LocalizedText_DisplayType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocalizedText_DisplayType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LocalizedText_DisplayType(int32_t  value__) noexcept;

/// @brief Field Key value: I32(0)
static ::GlobalNamespace::LocalizedText_DisplayType const Key;

/// @brief Field RawValue value: I32(1)
static ::GlobalNamespace::LocalizedText_DisplayType const RawValue;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5014};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedText_DisplayType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizedText_DisplayType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalizedText/<DelaySetBounds>d__17
struct CORDL_TYPE LocalizedText__DelaySetBounds_d__17 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180408fc0, size 0x140, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalizedText__DelaySetBounds_d__17() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
constexpr LocalizedText__DelaySetBounds_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::TMPro::TMP_Text>  text, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5015};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedText__DelaySetBounds_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText__DelaySetBounds_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText__DelaySetBounds_d__17, text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText__DelaySetBounds_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizedText__DelaySetBounds_d__17) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies LocalizedText::DisplayType, LocalizedText::MaterialType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedText
class CORDL_TYPE LocalizedText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DisplayType = ::GlobalNamespace::LocalizedText_DisplayType;

using MaterialType = ::GlobalNamespace::LocalizedText_MaterialType;

using _DelaySetBounds_d__17 = ::GlobalNamespace::LocalizedText__DelaySetBounds_d__17;

/// @brief Field delaySetBounds, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_delaySetBounds, put=__cordl_internal_set_delaySetBounds)) bool  delaySetBounds;

/// @brief Field displayType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_displayType, put=__cordl_internal_set_displayType)) ::GlobalNamespace::LocalizedText_DisplayType  displayType;

/// @brief Field initialized, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field key, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::StringW  key;

/// @brief Field materialType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialType, put=__cordl_internal_set_materialType)) ::GlobalNamespace::LocalizedText_MaterialType  materialType;

/// @brief Field noGlyphs, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_noGlyphs, put=__cordl_internal_set_noGlyphs)) bool  noGlyphs;

/// @brief Field onChange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChange, put=__cordl_internal_set_onChange)) ::System::Action*  onChange;

/// @brief Field onRefresh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onRefresh, put=setStaticF_onRefresh)) ::System::Action*  onRefresh;

/// @brief Field rawValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawValue, put=__cordl_internal_set_rawValue)) ::StringW  rawValue;

/// @brief Field textElement, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_textElement, put=__cordl_internal_set_textElement)) ::UnityW<::TMPro::TMP_Text>  textElement;

/// @brief Method Change, addr 0x180402790, size 0x90, virtual false, abstract: false, final false
inline void Change(::StringW  newString, ::GlobalNamespace::LocalizedText_DisplayType  displayType) ;

/// @brief Method ChangeKey, addr 0x1804026d0, size 0x60, virtual false, abstract: false, final false
inline void ChangeKey(::StringW  key) ;

/// @brief Method ChangeValue, addr 0x180402730, size 0x60, virtual false, abstract: false, final false
inline void ChangeValue(::StringW  newValue) ;

/// @brief Method DelaySetBounds, addr 0x180402820, size 0x90, virtual false, abstract: false, final false
static inline void DelaySetBounds(::TMPro::TMP_Text*  text) ;

/// @brief Method FixBounds, addr 0x1804028b0, size 0x320, virtual false, abstract: false, final false
static inline void FixBounds(::TMPro::TMP_Text*  text) ;

/// @brief Method GetLocalizedString, addr 0x180402bd0, size 0x60, virtual false, abstract: false, final false
static inline ::StringW GetLocalizedString(::StringW  key) ;

/// @brief Method Initialize, addr 0x180402c30, size 0x50, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::LocalizedText* New_ctor() ;

/// @brief Method OnDisable, addr 0x180402c80, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180402d70, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTransformParentChanged, addr 0x180402e60, size 0x20, virtual false, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method Refresh, addr 0x180402eb0, size 0x150, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method Refresh, addr 0x180403000, size 0x120, virtual false, abstract: false, final false
inline void Refresh(::GlobalNamespace::LocalizationLanguage  language) ;

/// @brief Method RefreshAll, addr 0x180402e80, size 0x30, virtual false, abstract: false, final false
static inline void RefreshAll() ;

constexpr bool const& __cordl_internal_get_delaySetBounds() const;

constexpr bool& __cordl_internal_get_delaySetBounds() ;

constexpr ::GlobalNamespace::LocalizedText_DisplayType const& __cordl_internal_get_displayType() const;

constexpr ::GlobalNamespace::LocalizedText_DisplayType& __cordl_internal_get_displayType() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::StringW const& __cordl_internal_get_key() const;

constexpr ::StringW& __cordl_internal_get_key() ;

constexpr ::GlobalNamespace::LocalizedText_MaterialType const& __cordl_internal_get_materialType() const;

constexpr ::GlobalNamespace::LocalizedText_MaterialType& __cordl_internal_get_materialType() ;

constexpr bool const& __cordl_internal_get_noGlyphs() const;

constexpr bool& __cordl_internal_get_noGlyphs() ;

constexpr ::System::Action* const& __cordl_internal_get_onChange() const;

constexpr ::System::Action*& __cordl_internal_get_onChange() ;

constexpr ::StringW const& __cordl_internal_get_rawValue() const;

constexpr ::StringW& __cordl_internal_get_rawValue() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textElement() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textElement() ;

constexpr void __cordl_internal_set_delaySetBounds(bool  value) ;

constexpr void __cordl_internal_set_displayType(::GlobalNamespace::LocalizedText_DisplayType  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_key(::StringW  value) ;

constexpr void __cordl_internal_set_materialType(::GlobalNamespace::LocalizedText_MaterialType  value) ;

constexpr void __cordl_internal_set_noGlyphs(bool  value) ;

constexpr void __cordl_internal_set_onChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_rawValue(::StringW  value) ;

constexpr void __cordl_internal_set_textElement(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_onRefresh() ;

static inline void setStaticF_onRefresh(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedText(LocalizedText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedText(LocalizedText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5016};

/// @brief Field displayType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::LocalizedText_DisplayType  ___displayType;

/// @brief Field rawValue, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___rawValue;

/// @brief Field key, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___key;

/// @brief Field materialType, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::LocalizedText_MaterialType  ___materialType;

/// @brief Field delaySetBounds, offset: 0x3c, size: 0x1, def value: None
 bool  ___delaySetBounds;

/// @brief Field noGlyphs, offset: 0x3d, size: 0x1, def value: None
 bool  ___noGlyphs;

/// @brief Field textElement, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textElement;

/// @brief Field initialized, offset: 0x48, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field onChange, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___onChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedText, ___displayType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ___rawValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ___key) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ___materialType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ___delaySetBounds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ___noGlyphs) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ___textElement) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ___initialized) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ___onChange) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizedText) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
