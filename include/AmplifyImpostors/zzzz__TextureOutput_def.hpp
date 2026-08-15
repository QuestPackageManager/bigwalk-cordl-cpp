#pragma once
// IWYU pragma private; include "AmplifyImpostors/TextureOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AmplifyImpostors/zzzz__ImageFormat_def.hpp"
#include "AmplifyImpostors/zzzz__OverrideMask_def.hpp"
#include "AmplifyImpostors/zzzz__TextureChannels_def.hpp"
#include "AmplifyImpostors/zzzz__TextureCompression_def.hpp"
#include "AmplifyImpostors/zzzz__TextureScale_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureOutput)
namespace AmplifyImpostors {
struct ImageFormat;
}
namespace AmplifyImpostors {
struct TextureChannels;
}
namespace AmplifyImpostors {
struct TextureCompression;
}
namespace AmplifyImpostors {
struct TextureScale;
}
// Forward declare root types
namespace AmplifyImpostors {
class TextureOutput;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::TextureOutput*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::TextureOutput*, "AmplifyImpostors", "TextureOutput");
// Dependencies AmplifyImpostors.ImageFormat, AmplifyImpostors.OverrideMask, AmplifyImpostors.TextureChannels, AmplifyImpostors.TextureCompression, AmplifyImpostors.TextureScale, System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.TextureOutput
class CORDL_TYPE TextureOutput : public ::System::Object {
public:
// Declarations
/// @brief Field Active, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_Active, put=__cordl_internal_set_Active)) bool  Active;

/// @brief Field Channels, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Channels, put=__cordl_internal_set_Channels)) ::AmplifyImpostors::TextureChannels  Channels;

/// @brief Field Compression, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Compression, put=__cordl_internal_set_Compression)) ::AmplifyImpostors::TextureCompression  Compression;

/// @brief Field ImageFormat, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ImageFormat, put=__cordl_internal_set_ImageFormat)) ::AmplifyImpostors::ImageFormat  ImageFormat;

/// @brief Field Index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Index, put=__cordl_internal_set_Index)) int32_t  Index;

/// @brief Field Name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field OverrideMask, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_OverrideMask, put=__cordl_internal_set_OverrideMask)) ::AmplifyImpostors::OverrideMask  OverrideMask;

/// @brief Field SRGB, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_SRGB, put=__cordl_internal_set_SRGB)) bool  SRGB;

/// @brief Field Scale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) ::AmplifyImpostors::TextureScale  Scale;

/// @brief Method Clone, addr 0x1802dab00, size 0x50, virtual false, abstract: false, final false
inline ::AmplifyImpostors::TextureOutput* Clone() ;

static inline ::AmplifyImpostors::TextureOutput* New_ctor() ;

static inline ::AmplifyImpostors::TextureOutput* New_ctor(bool  a, ::StringW  n, ::AmplifyImpostors::TextureScale  s, bool  sr, ::AmplifyImpostors::TextureChannels  c, ::AmplifyImpostors::TextureCompression  nc, ::AmplifyImpostors::ImageFormat  i) ;

constexpr bool const& __cordl_internal_get_Active() const;

constexpr bool& __cordl_internal_get_Active() ;

constexpr ::AmplifyImpostors::TextureChannels const& __cordl_internal_get_Channels() const;

constexpr ::AmplifyImpostors::TextureChannels& __cordl_internal_get_Channels() ;

constexpr ::AmplifyImpostors::TextureCompression const& __cordl_internal_get_Compression() const;

constexpr ::AmplifyImpostors::TextureCompression& __cordl_internal_get_Compression() ;

constexpr ::AmplifyImpostors::ImageFormat const& __cordl_internal_get_ImageFormat() const;

constexpr ::AmplifyImpostors::ImageFormat& __cordl_internal_get_ImageFormat() ;

constexpr int32_t const& __cordl_internal_get_Index() const;

constexpr int32_t& __cordl_internal_get_Index() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::AmplifyImpostors::OverrideMask const& __cordl_internal_get_OverrideMask() const;

constexpr ::AmplifyImpostors::OverrideMask& __cordl_internal_get_OverrideMask() ;

constexpr bool const& __cordl_internal_get_SRGB() const;

constexpr bool& __cordl_internal_get_SRGB() ;

constexpr ::AmplifyImpostors::TextureScale const& __cordl_internal_get_Scale() const;

constexpr ::AmplifyImpostors::TextureScale& __cordl_internal_get_Scale() ;

constexpr void __cordl_internal_set_Active(bool  value) ;

constexpr void __cordl_internal_set_Channels(::AmplifyImpostors::TextureChannels  value) ;

constexpr void __cordl_internal_set_Compression(::AmplifyImpostors::TextureCompression  value) ;

constexpr void __cordl_internal_set_ImageFormat(::AmplifyImpostors::ImageFormat  value) ;

constexpr void __cordl_internal_set_Index(int32_t  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_OverrideMask(::AmplifyImpostors::OverrideMask  value) ;

constexpr void __cordl_internal_set_SRGB(bool  value) ;

constexpr void __cordl_internal_set_Scale(::AmplifyImpostors::TextureScale  value) ;

/// @brief Method .ctor, addr 0x1802dab50, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1802daba0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(bool  a, ::StringW  n, ::AmplifyImpostors::TextureScale  s, bool  sr, ::AmplifyImpostors::TextureChannels  c, ::AmplifyImpostors::TextureCompression  nc, ::AmplifyImpostors::ImageFormat  i) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureOutput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureOutput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureOutput(TextureOutput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureOutput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureOutput(TextureOutput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20956};

/// @brief Field Index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Index;

/// @brief Field OverrideMask, offset: 0x14, size: 0x4, def value: None
 ::AmplifyImpostors::OverrideMask  ___OverrideMask;

/// @brief Field Active, offset: 0x18, size: 0x1, def value: None
 bool  ___Active;

/// @brief Field Name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Scale, offset: 0x28, size: 0x4, def value: None
 ::AmplifyImpostors::TextureScale  ___Scale;

/// @brief Field SRGB, offset: 0x2c, size: 0x1, def value: None
 bool  ___SRGB;

/// @brief Field Channels, offset: 0x30, size: 0x4, def value: None
 ::AmplifyImpostors::TextureChannels  ___Channels;

/// @brief Field Compression, offset: 0x34, size: 0x4, def value: None
 ::AmplifyImpostors::TextureCompression  ___Compression;

/// @brief Field ImageFormat, offset: 0x38, size: 0x4, def value: None
 ::AmplifyImpostors::ImageFormat  ___ImageFormat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::TextureOutput, ___Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::TextureOutput, ___OverrideMask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::TextureOutput, ___Active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::TextureOutput, ___Name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::TextureOutput, ___Scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::TextureOutput, ___SRGB) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::TextureOutput, ___Channels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::TextureOutput, ___Compression) == 0x34, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::TextureOutput, ___ImageFormat) == 0x38, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::TextureOutput) == 0x40, "Size mismatch!");

} // namespace end def AmplifyImpostors
