#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Noise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Noise)
namespace JBooth::MicroVerseCore {
struct Noise_NoiseSpace;
}
namespace JBooth::MicroVerseCore {
struct Noise_NoiseType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct Noise_NoiseSpace;
}
namespace JBooth::MicroVerseCore {
struct Noise_NoiseType;
}
namespace JBooth::MicroVerseCore {
class Noise;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::Noise_NoiseSpace);
MARK_VAL_T(::JBooth::MicroVerseCore::Noise_NoiseType);
MARK_REF_T(::JBooth::MicroVerseCore::Noise*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Noise_NoiseSpace, "JBooth.MicroVerseCore", "Noise/NoiseSpace");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Noise_NoiseType, "JBooth.MicroVerseCore", "Noise/NoiseType");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Noise*, "JBooth.MicroVerseCore", "Noise");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.Noise/NoiseType
struct CORDL_TYPE Noise_NoiseType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Noise_NoiseType_Unwrapped
enum struct __Noise_NoiseType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Simple = static_cast<int32_t>(0x1),
__E_FBM = static_cast<int32_t>(0x2),
__E_Worley = static_cast<int32_t>(0x3),
__E_Worm = static_cast<int32_t>(0x4),
__E_WormFBM = static_cast<int32_t>(0x5),
__E_Texture = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Noise_NoiseType_Unwrapped () const noexcept {
return static_cast<__Noise_NoiseType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Noise_NoiseType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Noise_NoiseType(int32_t  value__) noexcept;

/// @brief Field FBM value: I32(2)
static ::JBooth::MicroVerseCore::Noise_NoiseType const FBM;

/// @brief Field None value: I32(0)
static ::JBooth::MicroVerseCore::Noise_NoiseType const None;

/// @brief Field Simple value: I32(1)
static ::JBooth::MicroVerseCore::Noise_NoiseType const Simple;

/// @brief Field Texture value: I32(6)
static ::JBooth::MicroVerseCore::Noise_NoiseType const Texture;

/// @brief Field Worley value: I32(3)
static ::JBooth::MicroVerseCore::Noise_NoiseType const Worley;

/// @brief Field Worm value: I32(4)
static ::JBooth::MicroVerseCore::Noise_NoiseType const Worm;

/// @brief Field WormFBM value: I32(5)
static ::JBooth::MicroVerseCore::Noise_NoiseType const WormFBM;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18022};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Noise_NoiseType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Noise_NoiseType) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.Noise/NoiseSpace
struct CORDL_TYPE Noise_NoiseSpace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Noise_NoiseSpace_Unwrapped
enum struct __Noise_NoiseSpace_Unwrapped : int32_t {
__E_World = static_cast<int32_t>(0x0),
__E_Stamp = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Noise_NoiseSpace_Unwrapped () const noexcept {
return static_cast<__Noise_NoiseSpace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Noise_NoiseSpace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Noise_NoiseSpace(int32_t  value__) noexcept;

/// @brief Field Stamp value: I32(1)
static ::JBooth::MicroVerseCore::Noise_NoiseSpace const Stamp;

/// @brief Field World value: I32(0)
static ::JBooth::MicroVerseCore::Noise_NoiseSpace const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18023};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Noise_NoiseSpace, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Noise_NoiseSpace) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.FalloffFilter::TextureChannel, JBooth.MicroVerseCore.Noise::NoiseSpace, JBooth.MicroVerseCore.Noise::NoiseType, System.Object, UnityEngine.Vector4
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Noise
class CORDL_TYPE Noise : public ::System::Object {
public:
// Declarations
using NoiseSpace = ::JBooth::MicroVerseCore::Noise_NoiseSpace;

using NoiseType = ::JBooth::MicroVerseCore::Noise_NoiseType;

/// @brief Field amplitude, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_amplitude, put=__cordl_internal_set_amplitude)) float_t  amplitude;

/// @brief Field balance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_balance, put=__cordl_internal_set_balance)) float_t  balance;

/// @brief Field channel, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  channel;

/// @brief Field displayGamma, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_displayGamma, put=__cordl_internal_set_displayGamma)) float_t  displayGamma;

/// @brief Field frequency, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_frequency, put=__cordl_internal_set_frequency)) float_t  frequency;

/// @brief Field noiseSpace, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_noiseSpace, put=__cordl_internal_set_noiseSpace)) ::JBooth::MicroVerseCore::Noise_NoiseSpace  noiseSpace;

/// @brief Field noiseType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_noiseType, put=__cordl_internal_set_noiseType)) ::JBooth::MicroVerseCore::Noise_NoiseType  noiseType;

/// @brief Field offset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) float_t  offset;

/// @brief Field texture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

/// @brief Field textureST, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_textureST, put=__cordl_internal_set_textureST)) ::UnityEngine::Vector4  textureST;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Clone, addr 0x180535a00, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method EnableKeyword, addr 0x18143b6c0, size 0x150, virtual false, abstract: false, final false
inline void EnableKeyword(::UnityEngine::Material*  material, ::StringW  prefix, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

/// @brief Method GetParam2Vector, addr 0x18143b810, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetParam2Vector() ;

/// @brief Method GetParamVector, addr 0x18143b830, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetParamVector() ;

/// @brief Method GetTextureOffset, addr 0x18143b850, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetTextureOffset() ;

/// @brief Method GetTextureParams, addr 0x1802e30e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetTextureParams() ;

/// @brief Method GetTextureScale, addr 0x18143b870, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetTextureScale() ;

/// @brief Method KeywordLookup, addr 0x18143b890, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW KeywordLookup(::StringW  key, ::JBooth::MicroVerseCore::Noise_NoiseType  nt) ;

static inline ::JBooth::MicroVerseCore::Noise* New_ctor() ;

/// @brief Method PrepareMaterial, addr 0x18143b930, size 0x170, virtual false, abstract: false, final false
inline void PrepareMaterial(::UnityEngine::Material*  mat, ::StringW  key, ::StringW  prop, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

constexpr float_t const& __cordl_internal_get_amplitude() const;

constexpr float_t& __cordl_internal_get_amplitude() ;

constexpr float_t const& __cordl_internal_get_balance() const;

constexpr float_t& __cordl_internal_get_balance() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel const& __cordl_internal_get_channel() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel& __cordl_internal_get_channel() ;

constexpr float_t const& __cordl_internal_get_displayGamma() const;

constexpr float_t& __cordl_internal_get_displayGamma() ;

constexpr float_t const& __cordl_internal_get_frequency() const;

constexpr float_t& __cordl_internal_get_frequency() ;

constexpr ::JBooth::MicroVerseCore::Noise_NoiseSpace const& __cordl_internal_get_noiseSpace() const;

constexpr ::JBooth::MicroVerseCore::Noise_NoiseSpace& __cordl_internal_get_noiseSpace() ;

constexpr ::JBooth::MicroVerseCore::Noise_NoiseType const& __cordl_internal_get_noiseType() const;

constexpr ::JBooth::MicroVerseCore::Noise_NoiseType& __cordl_internal_get_noiseType() ;

constexpr float_t const& __cordl_internal_get_offset() const;

constexpr float_t& __cordl_internal_get_offset() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_textureST() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_textureST() ;

constexpr void __cordl_internal_set_amplitude(float_t  value) ;

constexpr void __cordl_internal_set_balance(float_t  value) ;

constexpr void __cordl_internal_set_channel(::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  value) ;

constexpr void __cordl_internal_set_displayGamma(float_t  value) ;

constexpr void __cordl_internal_set_frequency(float_t  value) ;

constexpr void __cordl_internal_set_noiseSpace(::JBooth::MicroVerseCore::Noise_NoiseSpace  value) ;

constexpr void __cordl_internal_set_noiseType(::JBooth::MicroVerseCore::Noise_NoiseType  value) ;

constexpr void __cordl_internal_set_offset(float_t  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_textureST(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x18143baa0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Noise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Noise", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Noise(Noise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Noise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Noise(Noise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18024};

/// @brief Field noiseType, offset: 0x10, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::Noise_NoiseType  ___noiseType;

/// @brief Field noiseSpace, offset: 0x14, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::Noise_NoiseSpace  ___noiseSpace;

/// @brief Field frequency, offset: 0x18, size: 0x4, def value: None
 float_t  ___frequency;

/// @brief Field amplitude, offset: 0x1c, size: 0x4, def value: None
 float_t  ___amplitude;

/// @brief Field offset, offset: 0x20, size: 0x4, def value: None
 float_t  ___offset;

/// @brief Field balance, offset: 0x24, size: 0x4, def value: None
 float_t  ___balance;

/// @brief Field texture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

/// @brief Field textureST, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___textureST;

/// @brief Field channel, offset: 0x40, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  ___channel;

/// @brief Field displayGamma, offset: 0x44, size: 0x4, def value: None
 float_t  ___displayGamma;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___noiseType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___noiseSpace) == 0x14, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___frequency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___amplitude) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___balance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___texture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___textureST) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___channel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Noise, ___displayGamma) == 0x44, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Noise) == 0x48, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
