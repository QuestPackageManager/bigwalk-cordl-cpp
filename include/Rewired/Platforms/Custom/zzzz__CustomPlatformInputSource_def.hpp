#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomPlatformInputSource)
namespace Rewired::Platforms::Custom {
class CustomPlatformConfigVars;
}
namespace Rewired::Platforms::Custom {
class CustomPlatformInputSource_InitOptions;
}
namespace Rewired::Platforms::Custom {
class CustomPlatformInputSource_Joystick;
}
namespace Rewired::Platforms::Custom {
class CustomPlatformUnifiedKeyboardSource;
}
namespace Rewired::Platforms::Custom {
class CustomPlatformUnifiedMouseSource;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class CustomPlatformInputSource;
}
namespace Rewired::Platforms::Custom {
class CustomPlatformInputSource_InitOptions;
}
namespace Rewired::Platforms::Custom {
class CustomPlatformInputSource_Joystick;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::CustomPlatformInputSource*);
MARK_REF_T(::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*);
MARK_REF_T(::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomPlatformInputSource*, "Rewired.Platforms.Custom", "CustomPlatformInputSource");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*, "Rewired.Platforms.Custom", "CustomPlatformInputSource/InitOptions");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick*, "Rewired.Platforms.Custom", "CustomPlatformInputSource/Joystick");
// Dependencies Rewired.Platforms.Custom.CustomInputSource::Joystick
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomPlatformInputSource/Joystick
class CORDL_TYPE CustomPlatformInputSource_Joystick : public ::Rewired::Platforms::Custom::CustomInputSource_Joystick {
public:
// Declarations
static inline ::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method .ctor, addr 0x181881a40, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, int64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPlatformInputSource_Joystick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformInputSource_Joystick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPlatformInputSource_Joystick(CustomPlatformInputSource_Joystick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformInputSource_Joystick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPlatformInputSource_Joystick(CustomPlatformInputSource_Joystick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2297};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick) == 0x90, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies System.Object
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomPlatformInputSource/InitOptions
class CORDL_TYPE CustomPlatformInputSource_InitOptions : public ::System::Object {
public:
// Declarations
/// @brief Field unifiedKeyboardSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_unifiedKeyboardSource, put=__cordl_internal_set_unifiedKeyboardSource)) ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*  unifiedKeyboardSource;

/// @brief Field unifiedMouseSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_unifiedMouseSource, put=__cordl_internal_set_unifiedMouseSource)) ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*  unifiedMouseSource;

static inline ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions* New_ctor() ;

constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource* const& __cordl_internal_get_unifiedKeyboardSource() const;

constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*& __cordl_internal_get_unifiedKeyboardSource() ;

constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource* const& __cordl_internal_get_unifiedMouseSource() const;

constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*& __cordl_internal_get_unifiedMouseSource() ;

constexpr void __cordl_internal_set_unifiedKeyboardSource(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*  value) ;

constexpr void __cordl_internal_set_unifiedMouseSource(::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPlatformInputSource_InitOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformInputSource_InitOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPlatformInputSource_InitOptions(CustomPlatformInputSource_InitOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformInputSource_InitOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPlatformInputSource_InitOptions(CustomPlatformInputSource_InitOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2298};

/// @brief Field unifiedKeyboardSource, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*  ___unifiedKeyboardSource;

/// @brief Field unifiedMouseSource, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*  ___unifiedMouseSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions, ___unifiedKeyboardSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions, ___unifiedMouseSource) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Platforms.Custom.CustomInputSource
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomPlatformInputSource
class CORDL_TYPE CustomPlatformInputSource : public ::Rewired::Platforms::Custom::CustomInputSource {
public:
// Declarations
using InitOptions = ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions;

using Joystick = ::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick;

/// @brief Field WEZdNSduhACIrErYeuNoButCowVLc, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_WEZdNSduhACIrErYeuNoButCowVLc, put=__cordl_internal_set_WEZdNSduhACIrErYeuNoButCowVLc)) ::Rewired::Platforms::Custom::CustomPlatformConfigVars*  WEZdNSduhACIrErYeuNoButCowVLc;

/// @brief Field XbWKjxUnegYhZOPbxAlyXmSWtqgD, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_XbWKjxUnegYhZOPbxAlyXmSWtqgD, put=__cordl_internal_set_XbWKjxUnegYhZOPbxAlyXmSWtqgD)) bool  XbWKjxUnegYhZOPbxAlyXmSWtqgD;

/// @brief Field loiBVggetCxNtbRjeSAMhGkXKFcVA, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_loiBVggetCxNtbRjeSAMhGkXKFcVA, put=__cordl_internal_set_loiBVggetCxNtbRjeSAMhGkXKFcVA)) bool  loiBVggetCxNtbRjeSAMhGkXKFcVA;

/// @brief Field miuiKMglAapTIMqnapGNYlwJyRcr, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get_miuiKMglAapTIMqnapGNYlwJyRcr, put=__cordl_internal_set_miuiKMglAapTIMqnapGNYlwJyRcr)) bool  miuiKMglAapTIMqnapGNYlwJyRcr;

/// @brief Method BRnVzxQzgxNsXZwMjqXOThpNFkvo, addr 0x18187ed70, size 0x160, virtual true, abstract: false, final false
inline void BRnVzxQzgxNsXZwMjqXOThpNFkvo() ;

/// @brief Method Dispose, addr 0x18187eed0, size 0x20, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::Rewired::Platforms::Custom::CustomPlatformInputSource* New_ctor(::Rewired::Platforms::Custom::CustomPlatformConfigVars*  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::Rewired::Platforms::Custom::CustomPlatformConfigVars* const& __cordl_internal_get_WEZdNSduhACIrErYeuNoButCowVLc() const;

constexpr ::Rewired::Platforms::Custom::CustomPlatformConfigVars*& __cordl_internal_get_WEZdNSduhACIrErYeuNoButCowVLc() ;

constexpr bool const& __cordl_internal_get_XbWKjxUnegYhZOPbxAlyXmSWtqgD() const;

constexpr bool& __cordl_internal_get_XbWKjxUnegYhZOPbxAlyXmSWtqgD() ;

constexpr bool const& __cordl_internal_get_loiBVggetCxNtbRjeSAMhGkXKFcVA() const;

constexpr bool& __cordl_internal_get_loiBVggetCxNtbRjeSAMhGkXKFcVA() ;

constexpr bool const& __cordl_internal_get_miuiKMglAapTIMqnapGNYlwJyRcr() const;

constexpr bool& __cordl_internal_get_miuiKMglAapTIMqnapGNYlwJyRcr() ;

constexpr void __cordl_internal_set_WEZdNSduhACIrErYeuNoButCowVLc(::Rewired::Platforms::Custom::CustomPlatformConfigVars*  value) ;

constexpr void __cordl_internal_set_XbWKjxUnegYhZOPbxAlyXmSWtqgD(bool  value) ;

constexpr void __cordl_internal_set_loiBVggetCxNtbRjeSAMhGkXKFcVA(bool  value) ;

constexpr void __cordl_internal_set_miuiKMglAapTIMqnapGNYlwJyRcr(bool  value) ;

/// @brief Method .ctor, addr 0x18187eef0, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Custom::CustomPlatformConfigVars*  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method zlqMMABDOdfGqSDWPSdXrmMEwhpP, addr 0x18187f070, size 0x1a0, virtual true, abstract: false, final false
inline void zlqMMABDOdfGqSDWPSdXrmMEwhpP() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPlatformInputSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformInputSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPlatformInputSource(CustomPlatformInputSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformInputSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPlatformInputSource(CustomPlatformInputSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2299};

/// @brief Field WEZdNSduhACIrErYeuNoButCowVLc, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomPlatformConfigVars*  ___WEZdNSduhACIrErYeuNoButCowVLc;

/// @brief Field loiBVggetCxNtbRjeSAMhGkXKFcVA, offset: 0x60, size: 0x1, def value: None
 bool  ___loiBVggetCxNtbRjeSAMhGkXKFcVA;

/// @brief Field XbWKjxUnegYhZOPbxAlyXmSWtqgD, offset: 0x61, size: 0x1, def value: None
 bool  ___XbWKjxUnegYhZOPbxAlyXmSWtqgD;

/// @brief Field miuiKMglAapTIMqnapGNYlwJyRcr, offset: 0x62, size: 0x1, def value: None
 bool  ___miuiKMglAapTIMqnapGNYlwJyRcr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInputSource, ___WEZdNSduhACIrErYeuNoButCowVLc) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInputSource, ___loiBVggetCxNtbRjeSAMhGkXKFcVA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInputSource, ___XbWKjxUnegYhZOPbxAlyXmSWtqgD) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInputSource, ___miuiKMglAapTIMqnapGNYlwJyRcr) == 0x62, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomPlatformInputSource) == 0x68, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
