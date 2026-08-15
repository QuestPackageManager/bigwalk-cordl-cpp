#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Constants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Constants)
namespace WaveHarmonic::Crest {
class Constants_Symbols;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class Constants;
}
namespace WaveHarmonic::Crest {
class Constants_Symbols;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Constants*);
MARK_REF_T(::WaveHarmonic::Crest::Constants_Symbols*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Constants*, "WaveHarmonic.Crest", "Constants");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Constants_Symbols*, "WaveHarmonic.Crest", "Constants/Symbols");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Constants/Symbols
class CORDL_TYPE Constants_Symbols : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Constants_Symbols() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Constants_Symbols", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Constants_Symbols(Constants_Symbols && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Constants_Symbols", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Constants_Symbols(Constants_Symbols const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16470};

/// @brief Field k_Refraction offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Refraction{u"UNITY_2022_3_OR_NEWER"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Constants_Symbols) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Constants
class CORDL_TYPE Constants : public ::System::Object {
public:
// Declarations
using Symbols = ::WaveHarmonic::Crest::Constants_Symbols;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Constants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Constants(Constants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Constants(Constants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16471};

/// @brief Field k_FieldGroupOrder offset 0xffffffff size 0x4
static constexpr int32_t  k_FieldGroupOrder{static_cast<int32_t>(0x0)};

/// @brief Field k_FieldHeadingOrder offset 0xffffffff size 0x4
static constexpr int32_t  k_FieldHeadingOrder{static_cast<int32_t>(0x0)};

/// @brief Field k_MaximumTextureResolution offset 0xffffffff size 0x4
static constexpr int32_t  k_MaximumTextureResolution{static_cast<int32_t>(0x4000)};

/// @brief Field k_MenuPrefixDebug offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MenuPrefixDebug{u"Crest/Debug/Crest "};

/// @brief Field k_MenuPrefixInputs offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MenuPrefixInputs{u"Crest/Inputs/Crest "};

/// @brief Field k_MenuPrefixInternal offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MenuPrefixInternal{u"Crest/Internal/"};

/// @brief Field k_MenuPrefixPhysics offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MenuPrefixPhysics{u"Crest/Physics/Crest "};

/// @brief Field k_MenuPrefixSample offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MenuPrefixSample{u"Crest/Sample/Crest "};

/// @brief Field k_MenuPrefixScripts offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MenuPrefixScripts{u"Crest/Crest "};

/// @brief Field k_MenuPrefixSpline offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MenuPrefixSpline{u"Crest/Spline/Crest "};

/// @brief Field k_MenuPrefixTime offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MenuPrefixTime{u"Crest/Time/Crest "};

/// @brief Field k_MenuScripts offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MenuScripts{u"Crest/"};

/// @brief Field k_Prefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Prefix{u"Crest "};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Constants) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
