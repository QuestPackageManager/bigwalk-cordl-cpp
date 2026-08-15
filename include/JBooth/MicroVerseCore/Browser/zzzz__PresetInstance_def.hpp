#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Browser/PresetInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresetInstance)
namespace JBooth::MicroVerseCore::Browser {
class IContentBrowserDropAction;
}
namespace JBooth::MicroVerseCore::Browser {
struct PresetInstance_Category;
}
namespace JBooth::MicroVerseCore::Browser {
struct PresetInstance_DuplicateFoundAction;
}
// Forward declare root types
namespace JBooth::MicroVerseCore::Browser {
struct PresetInstance_Category;
}
namespace JBooth::MicroVerseCore::Browser {
struct PresetInstance_DuplicateFoundAction;
}
namespace JBooth::MicroVerseCore::Browser {
class PresetInstance;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::Browser::PresetInstance_Category);
MARK_VAL_T(::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction);
MARK_REF_T(::JBooth::MicroVerseCore::Browser::PresetInstance*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Browser::PresetInstance_Category, "JBooth.MicroVerseCore.Browser", "PresetInstance/Category");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction, "JBooth.MicroVerseCore.Browser", "PresetInstance/DuplicateFoundAction");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Browser::PresetInstance*, "JBooth.MicroVerseCore.Browser", "PresetInstance");
// Dependencies 
namespace JBooth::MicroVerseCore::Browser {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.Browser.PresetInstance/Category
struct CORDL_TYPE PresetInstance_Category {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PresetInstance_Category_Unwrapped
enum struct __PresetInstance_Category_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Sky = static_cast<int32_t>(0x1),
__E_Fog = static_cast<int32_t>(0x2),
__E_Water = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PresetInstance_Category_Unwrapped () const noexcept {
return static_cast<__PresetInstance_Category_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PresetInstance_Category() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PresetInstance_Category(int32_t  value__) noexcept;

/// @brief Field Fog value: I32(2)
static ::JBooth::MicroVerseCore::Browser::PresetInstance_Category const Fog;

/// @brief Field None value: I32(0)
static ::JBooth::MicroVerseCore::Browser::PresetInstance_Category const None;

/// @brief Field Sky value: I32(1)
static ::JBooth::MicroVerseCore::Browser::PresetInstance_Category const Sky;

/// @brief Field Water value: I32(3)
static ::JBooth::MicroVerseCore::Browser::PresetInstance_Category const Water;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18059};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Browser::PresetInstance_Category, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Browser::PresetInstance_Category) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore::Browser
// Dependencies 
namespace JBooth::MicroVerseCore::Browser {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.Browser.PresetInstance/DuplicateFoundAction
struct CORDL_TYPE PresetInstance_DuplicateFoundAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PresetInstance_DuplicateFoundAction_Unwrapped
enum struct __PresetInstance_DuplicateFoundAction_Unwrapped : int32_t {
__E_Hide = static_cast<int32_t>(0x0),
__E_Destroy = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PresetInstance_DuplicateFoundAction_Unwrapped () const noexcept {
return static_cast<__PresetInstance_DuplicateFoundAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PresetInstance_DuplicateFoundAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PresetInstance_DuplicateFoundAction(int32_t  value__) noexcept;

/// @brief Field Destroy value: I32(1)
static ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction const Destroy;

/// @brief Field Hide value: I32(0)
static ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction const Hide;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18060};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore::Browser
// Dependencies JBooth.MicroVerseCore.Browser.PresetInstance::Category, JBooth.MicroVerseCore.Browser.PresetInstance::DuplicateFoundAction, UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore::Browser {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Browser.PresetInstance
class CORDL_TYPE PresetInstance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Category = ::JBooth::MicroVerseCore::Browser::PresetInstance_Category;

using DuplicateFoundAction = ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction;

/// @brief Field category, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_category, put=__cordl_internal_set_category)) ::JBooth::MicroVerseCore::Browser::PresetInstance_Category  category;

/// @brief Field duplicateFoundAction, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_duplicateFoundAction, put=__cordl_internal_set_duplicateFoundAction)) ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction  duplicateFoundAction;

/// @brief Convert operator to "::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction"
constexpr operator  ::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction*() noexcept;

/// @brief Method Execute, addr 0x181446db0, size 0x180, virtual true, abstract: false, final true
inline void Execute(::by_ref<bool>  destroyAfterExecute) ;

static inline ::JBooth::MicroVerseCore::Browser::PresetInstance* New_ctor() ;

constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category const& __cordl_internal_get_category() const;

constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category& __cordl_internal_get_category() ;

constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction const& __cordl_internal_get_duplicateFoundAction() const;

constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction& __cordl_internal_get_duplicateFoundAction() ;

constexpr void __cordl_internal_set_category(::JBooth::MicroVerseCore::Browser::PresetInstance_Category  value) ;

constexpr void __cordl_internal_set_duplicateFoundAction(::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction  value) ;

/// @brief Method .ctor, addr 0x181446f30, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction"
constexpr ::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction* i___JBooth__MicroVerseCore__Browser__IContentBrowserDropAction() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PresetInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PresetInstance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PresetInstance(PresetInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PresetInstance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PresetInstance(PresetInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18061};

/// @brief Field category, offset: 0x20, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::Browser::PresetInstance_Category  ___category;

/// @brief Field duplicateFoundAction, offset: 0x24, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction  ___duplicateFoundAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Browser::PresetInstance, ___category) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Browser::PresetInstance, ___duplicateFoundAction) == 0x24, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Browser::PresetInstance) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore::Browser
