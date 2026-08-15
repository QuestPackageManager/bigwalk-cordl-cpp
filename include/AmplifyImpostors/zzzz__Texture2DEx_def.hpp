#pragma once
// IWYU pragma private; include "AmplifyImpostors/Texture2DEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DEx)
namespace AmplifyImpostors {
struct Texture2DEx_Compression;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace AmplifyImpostors {
struct Texture2DEx_Compression;
}
namespace AmplifyImpostors {
class Texture2DEx;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::Texture2DEx_Compression);
MARK_REF_T(::AmplifyImpostors::Texture2DEx*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::Texture2DEx_Compression, "AmplifyImpostors", "Texture2DEx/Compression");
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::Texture2DEx*, "AmplifyImpostors", "Texture2DEx");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.Texture2DEx/Compression
struct CORDL_TYPE Texture2DEx_Compression {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Texture2DEx_Compression_Unwrapped
enum struct __Texture2DEx_Compression_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_RLE = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Texture2DEx_Compression_Unwrapped () const noexcept {
return static_cast<__Texture2DEx_Compression_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Texture2DEx_Compression() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Texture2DEx_Compression(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::AmplifyImpostors::Texture2DEx_Compression const None;

/// @brief Field RLE value: I32(1)
static ::AmplifyImpostors::Texture2DEx_Compression const RLE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::Texture2DEx_Compression, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::Texture2DEx_Compression) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.Texture2DEx
class CORDL_TYPE Texture2DEx : public ::System::Object {
public:
// Declarations
using Compression = ::AmplifyImpostors::Texture2DEx_Compression;

/// @brief Field Footer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Footer, put=setStaticF_Footer)) ::ArrayW<uint8_t>  Footer;

/// @brief Method EncodeToTGA, addr 0x1802da140, size 0x920, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> EncodeToTGA(::UnityEngine::Texture2D*  tex, ::AmplifyImpostors::Texture2DEx_Compression  compression) ;

/// @brief Method Equals, addr 0x1802daa60, size 0x40, virtual false, abstract: false, final false
static inline bool Equals(::UnityEngine::Color32  first, ::UnityEngine::Color32  second) ;

static inline ::ArrayW<uint8_t> getStaticF_Footer() ;

static inline void setStaticF_Footer(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2DEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2DEx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2DEx(Texture2DEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2DEx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2DEx(Texture2DEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::Texture2DEx) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors
