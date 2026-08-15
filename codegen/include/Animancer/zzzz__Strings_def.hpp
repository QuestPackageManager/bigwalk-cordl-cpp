#pragma once
// IWYU pragma private; include "Animancer/Strings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Strings)
namespace Animancer {
class Strings_DocsURLs;
}
namespace Animancer {
class Strings_Tooltips;
}
// Forward declare root types
namespace Animancer {
class Strings;
}
namespace Animancer {
class Strings_DocsURLs;
}
namespace Animancer {
class Strings_Tooltips;
}
// Write type traits
MARK_REF_T(::Animancer::Strings*);
MARK_REF_T(::Animancer::Strings_DocsURLs*);
MARK_REF_T(::Animancer::Strings_Tooltips*);
DEFINE_IL2CPP_CLASS(::Animancer::Strings*, "Animancer", "Strings");
DEFINE_IL2CPP_CLASS(::Animancer::Strings_DocsURLs*, "Animancer", "Strings/DocsURLs");
DEFINE_IL2CPP_CLASS(::Animancer::Strings_Tooltips*, "Animancer", "Strings/Tooltips");
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Strings/DocsURLs
class CORDL_TYPE Strings_DocsURLs : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Strings_DocsURLs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Strings_DocsURLs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Strings_DocsURLs(Strings_DocsURLs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Strings_DocsURLs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Strings_DocsURLs(Strings_DocsURLs const& ) = delete;

/// @brief Field APIDocumentation offset 0xffffffff size 0x8
static constexpr ::ConstString  APIDocumentation{u"https://kybernetik.com.au/animancer/api/Animancer"};

/// @brief Field DeveloperEmail offset 0xffffffff size 0x8
static constexpr ::ConstString  DeveloperEmail{u"animancer@kybernetik.com.au"};

/// @brief Field Documentation offset 0xffffffff size 0x8
static constexpr ::ConstString  Documentation{u"https://kybernetik.com.au/animancer"};

/// @brief Field ExampleAPIDocumentation offset 0xffffffff size 0x8
static constexpr ::ConstString  ExampleAPIDocumentation{u"https://kybernetik.com.au/animancer/api/Animancer.Examples."};

/// @brief Field LatestVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  LatestVersion{u"https://kybernetik.com.au/animancer/latest-version.txt"};

/// @brief Field OptionalWarning offset 0xffffffff size 0x8
static constexpr ::ConstString  OptionalWarning{u"https://kybernetik.com.au/animancer/api/Animancer/OptionalWarning"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18131};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Strings_DocsURLs) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Strings/Tooltips
class CORDL_TYPE Strings_Tooltips : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Strings_Tooltips() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Strings_Tooltips", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Strings_Tooltips(Strings_Tooltips && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Strings_Tooltips", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Strings_Tooltips(Strings_Tooltips const& ) = delete;

/// @brief Field CallbackTime offset 0xffffffff size 0x8
static constexpr ::ConstString  CallbackTime{u"The time when the Event Callback will be triggered.\n\u{2022} x = Normalized, s = Seconds, f = Frame"};

/// @brief Field EndTime offset 0xffffffff size 0x8
static constexpr ::ConstString  EndTime{u"The time when the End Callback will be triggered.\n\u{2022} x = Normalized, s = Seconds, f = Frame\n\nDisabling the toggle automates the value:\n\u{2022} Speed >= 0 ends at 1x\n\u{2022} Speed < 0 ends at 0x"};

/// @brief Field FadeDuration offset 0xffffffff size 0x8
static constexpr ::ConstString  FadeDuration{u"The amount of time the transition will take, e.g:\n\u{2022} 0s = Instant\n\u{2022} 0.25s = quarter of a second (Default)\n\u{2022} 0.25x = quarter of the animation length\n\u{2022} x = Normalized, s = Seconds, f = Frame\n\u{2022} Middle Click = reset to default value"};

/// @brief Field MiddleClickReset offset 0xffffffff size 0x8
static constexpr ::ConstString  MiddleClickReset{u"\n\u{2022} Middle Click = reset to default value"};

/// @brief Field NormalizedStartTime offset 0xffffffff size 0x8
static constexpr ::ConstString  NormalizedStartTime{u"\u{2022} Enabled = use FadeMode.FromStart and always restart at this time.\n\u{2022} Disabled = use FadeMode.FixedSpeed and continue from the current time if already playing.\n\u{2022} x = Normalized, s = Seconds, f = Frame"};

/// @brief Field OptionalSpeed offset 0xffffffff size 0x8
static constexpr ::ConstString  OptionalSpeed{u"How fast the animation will play, e.g:\n\u{2022} 0x = paused\n\u{2022} 1x = normal speed\n\u{2022} -2x = double speed backwards\n\u{2022} Disabled = keep previous speed\n\u{2022} Middle Click = reset to default value"};

/// @brief Field Speed offset 0xffffffff size 0x8
static constexpr ::ConstString  Speed{u"How fast the animation will play, e.g:\n\u{2022} 0x = paused\n\u{2022} 1x = normal speed\n\u{2022} -2x = double speed backwards"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18132};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Strings_Tooltips) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Strings
class CORDL_TYPE Strings : public ::System::Object {
public:
// Declarations
using DocsURLs = ::Animancer::Strings_DocsURLs;

using Tooltips = ::Animancer::Strings_Tooltips;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Strings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Strings(Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Strings(Strings const& ) = delete;

/// @brief Field AnimancerToolsMenuPath offset 0xffffffff size 0x8
static constexpr ::ConstString  AnimancerToolsMenuPath{u"Window/Animation/Animancer Tools"};

/// @brief Field Assertions offset 0xffffffff size 0x8
static constexpr ::ConstString  Assertions{u"UNITY_ASSERTIONS"};

/// @brief Field AssetMenuOrder offset 0xffffffff size 0x4
static constexpr int32_t  AssetMenuOrder{static_cast<int32_t>(0x19a)};

/// @brief Field CreateMenuPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  CreateMenuPrefix{u"Assets/Create/Animancer/"};

/// @brief Field ExamplesMenuPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  ExamplesMenuPrefix{u"Animancer/Examples/"};

/// @brief Field Indent offset 0xffffffff size 0x8
static constexpr ::ConstString  Indent{u"    "};

/// @brief Field MenuPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  MenuPrefix{u"Animancer/"};

/// @brief Field MustBeFinite offset 0xffffffff size 0x8
static constexpr ::ConstString  MustBeFinite{u"must not be NaN or Infinity"};

/// @brief Field ProOnlyTag offset 0xffffffff size 0x8
static constexpr ::ConstString  ProOnlyTag{u""};

/// @brief Field ProductName offset 0xffffffff size 0x8
static constexpr ::ConstString  ProductName{u"Animancer"};

/// @brief Field UnityEditor offset 0xffffffff size 0x8
static constexpr ::ConstString  UnityEditor{u"UNITY_EDITOR"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18133};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Strings) == 0x10, "Size mismatch!");

} // namespace end def Animancer
