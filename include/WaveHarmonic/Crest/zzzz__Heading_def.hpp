#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Heading.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Heading)
namespace WaveHarmonic::Crest {
struct Heading_Style;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct Heading_Style;
}
namespace WaveHarmonic::Crest {
class Heading;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Heading_Style);
MARK_REF_T(::WaveHarmonic::Crest::Heading*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Heading_Style, "WaveHarmonic.Crest", "Heading/Style");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Heading*, "WaveHarmonic.Crest", "Heading");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Heading/Style
struct CORDL_TYPE Heading_Style {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Heading_Style_Unwrapped
enum struct __Heading_Style_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Settings = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Heading_Style_Unwrapped () const noexcept {
return static_cast<__Heading_Style_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Heading_Style() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Heading_Style(int32_t  value__) noexcept;

/// @brief Field Normal value: I32(0)
static ::WaveHarmonic::Crest::Heading_Style const Normal;

/// @brief Field Settings value: I32(1)
static ::WaveHarmonic::Crest::Heading_Style const Settings;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Heading_Style, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Heading_Style) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Heading
class CORDL_TYPE Heading : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
using Style = ::WaveHarmonic::Crest::Heading_Style;

static inline ::WaveHarmonic::Crest::Heading* New_ctor(::StringW  heading, ::WaveHarmonic::Crest::Heading_Style  style, bool  alwaysVisible, bool  alwaysEnabled, ::StringW  helpLink) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  heading, ::WaveHarmonic::Crest::Heading_Style  style, bool  alwaysVisible, bool  alwaysEnabled, ::StringW  helpLink) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Heading() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Heading", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Heading(Heading && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Heading", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Heading(Heading const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20111};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Heading) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
