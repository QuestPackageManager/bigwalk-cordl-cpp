#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/HelpBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HelpBox)
namespace WaveHarmonic::Crest {
struct HelpBox_MessageType;
}
namespace WaveHarmonic::Crest {
struct HelpBox_Visibility;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct HelpBox_MessageType;
}
namespace WaveHarmonic::Crest {
struct HelpBox_Visibility;
}
namespace WaveHarmonic::Crest {
class HelpBox;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::HelpBox_MessageType);
MARK_VAL_T(::WaveHarmonic::Crest::HelpBox_Visibility);
MARK_REF_T(::WaveHarmonic::Crest::HelpBox*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::HelpBox_MessageType, "WaveHarmonic.Crest", "HelpBox/MessageType");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::HelpBox_Visibility, "WaveHarmonic.Crest", "HelpBox/Visibility");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::HelpBox*, "WaveHarmonic.Crest", "HelpBox");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.HelpBox/MessageType
struct CORDL_TYPE HelpBox_MessageType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HelpBox_MessageType_Unwrapped
enum struct __HelpBox_MessageType_Unwrapped : int32_t {
__E_Info = static_cast<int32_t>(0x0),
__E_Warning = static_cast<int32_t>(0x1),
__E_Error = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HelpBox_MessageType_Unwrapped () const noexcept {
return static_cast<__HelpBox_MessageType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HelpBox_MessageType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HelpBox_MessageType(int32_t  value__) noexcept;

/// @brief Field Error value: I32(2)
static ::WaveHarmonic::Crest::HelpBox_MessageType const Error;

/// @brief Field Info value: I32(0)
static ::WaveHarmonic::Crest::HelpBox_MessageType const Info;

/// @brief Field Warning value: I32(1)
static ::WaveHarmonic::Crest::HelpBox_MessageType const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20119};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::HelpBox_MessageType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::HelpBox_MessageType) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.HelpBox/Visibility
struct CORDL_TYPE HelpBox_Visibility {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HelpBox_Visibility_Unwrapped
enum struct __HelpBox_Visibility_Unwrapped : int32_t {
__E_Always = static_cast<int32_t>(0x0),
__E_PropertyEnabled = static_cast<int32_t>(0x1),
__E_PropertyDisabled = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HelpBox_Visibility_Unwrapped () const noexcept {
return static_cast<__HelpBox_Visibility_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HelpBox_Visibility() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HelpBox_Visibility(int32_t  value__) noexcept;

/// @brief Field Always value: I32(0)
static ::WaveHarmonic::Crest::HelpBox_Visibility const Always;

/// @brief Field PropertyDisabled value: I32(2)
static ::WaveHarmonic::Crest::HelpBox_Visibility const PropertyDisabled;

/// @brief Field PropertyEnabled value: I32(1)
static ::WaveHarmonic::Crest::HelpBox_Visibility const PropertyEnabled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::HelpBox_Visibility, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::HelpBox_Visibility) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.HelpBox
class CORDL_TYPE HelpBox : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
using MessageType = ::WaveHarmonic::Crest::HelpBox_MessageType;

using Visibility = ::WaveHarmonic::Crest::HelpBox_Visibility;

static inline ::WaveHarmonic::Crest::HelpBox* New_ctor(::StringW  message, ::WaveHarmonic::Crest::HelpBox_MessageType  messageType, ::WaveHarmonic::Crest::HelpBox_Visibility  visibility) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::WaveHarmonic::Crest::HelpBox_MessageType  messageType, ::WaveHarmonic::Crest::HelpBox_Visibility  visibility) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelpBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpBox(HelpBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpBox(HelpBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::HelpBox) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
