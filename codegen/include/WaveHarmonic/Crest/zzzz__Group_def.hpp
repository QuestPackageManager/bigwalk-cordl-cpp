#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Group.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Group)
namespace WaveHarmonic::Crest {
struct Group_Style;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct Group_Style;
}
namespace WaveHarmonic::Crest {
class Group;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Group_Style);
MARK_REF_T(::WaveHarmonic::Crest::Group*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Group_Style, "WaveHarmonic.Crest", "Group/Style");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Group*, "WaveHarmonic.Crest", "Group");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Group/Style
struct CORDL_TYPE Group_Style {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Group_Style_Unwrapped
enum struct __Group_Style_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Foldout = static_cast<int32_t>(0x1),
__E_Accordian = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Group_Style_Unwrapped () const noexcept {
return static_cast<__Group_Style_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Group_Style() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Group_Style(int32_t  value__) noexcept;

/// @brief Field Accordian value: I32(2)
static ::WaveHarmonic::Crest::Group_Style const Accordian;

/// @brief Field Foldout value: I32(1)
static ::WaveHarmonic::Crest::Group_Style const Foldout;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::Group_Style const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20098};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Group_Style, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Group_Style) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Group
class CORDL_TYPE Group : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
using Style = ::WaveHarmonic::Crest::Group_Style;

static inline ::WaveHarmonic::Crest::Group* New_ctor(::StringW  title, ::WaveHarmonic::Crest::Group_Style  style, bool  isCustomFoldout) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  title, ::WaveHarmonic::Crest::Group_Style  style, bool  isCustomFoldout) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Group() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Group(Group && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Group(Group const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20099};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Group) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
