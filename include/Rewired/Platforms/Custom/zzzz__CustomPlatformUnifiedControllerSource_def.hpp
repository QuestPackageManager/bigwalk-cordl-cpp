#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformUnifiedControllerSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomPlatformUnifiedControllerSource)
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class Controller_Extension;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class CustomPlatformUnifiedControllerSource;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*, "Rewired.Platforms.Custom", "CustomPlatformUnifiedControllerSource");
// Dependencies System.Object
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomPlatformUnifiedControllerSource
class CORDL_TYPE CustomPlatformUnifiedControllerSource : public ::System::Object {
public:
// Declarations
/// @brief Field AojglTSNBBhNJclGVlxZftuMYKOK, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AojglTSNBBhNJclGVlxZftuMYKOK, put=__cordl_internal_set_AojglTSNBBhNJclGVlxZftuMYKOK)) ::ArrayW<float_t>  AojglTSNBBhNJclGVlxZftuMYKOK;

/// @brief Field FdzAKWfmmdOBDArOhkqdQAKIIhKtC, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_FdzAKWfmmdOBDArOhkqdQAKIIhKtC, put=__cordl_internal_set_FdzAKWfmmdOBDArOhkqdQAKIIhKtC)) int32_t  FdzAKWfmmdOBDArOhkqdQAKIIhKtC;

/// @brief Field MnTPCZAGtkqbwohNHAKMYgqGQTfg, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MnTPCZAGtkqbwohNHAKMYgqGQTfg, put=__cordl_internal_set_MnTPCZAGtkqbwohNHAKMYgqGQTfg)) int32_t  MnTPCZAGtkqbwohNHAKMYgqGQTfg;

/// @brief Field OoxuWBcepbZBNAjUJtPUFktZKQSE, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_OoxuWBcepbZBNAjUJtPUFktZKQSE, put=__cordl_internal_set_OoxuWBcepbZBNAjUJtPUFktZKQSE)) bool  OoxuWBcepbZBNAjUJtPUFktZKQSE;

/// @brief Field ZVeHoizqGjCgjbkCOAHXRNCzeSuJA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZVeHoizqGjCgjbkCOAHXRNCzeSuJA, put=__cordl_internal_set_ZVeHoizqGjCgjbkCOAHXRNCzeSuJA)) ::ArrayW<bool>  ZVeHoizqGjCgjbkCOAHXRNCzeSuJA;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_controllerExtension)) ::Rewired::Controller_Extension*  controllerExtension;

/// @brief Field grMkCDaDFdKDCMLdlbKNaLrOMovfA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_grMkCDaDFdKDCMLdlbKNaLrOMovfA, put=__cordl_internal_set_grMkCDaDFdKDCMLdlbKNaLrOMovfA)) ::ArrayW<bool>  grMkCDaDFdKDCMLdlbKNaLrOMovfA;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clear, addr 0x18187f210, size 0x50, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x18187f260, size 0x10, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetAxisValue, addr 0x18187f270, size 0x30, virtual false, abstract: false, final false
inline float_t GetAxisValue(int32_t  index) ;

/// @brief Method GetButtonValue, addr 0x18187f2a0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonValue(int32_t  index) ;

/// @brief Method MubFQkeLDvYigmYruZARIobnoHGeA, addr 0x18187f2d0, size 0x140, virtual false, abstract: false, final false
inline void MubFQkeLDvYigmYruZARIobnoHGeA(::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method OnInitialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnInitialize() ;

/// @brief Method SetAxisValue, addr 0x18187f410, size 0x30, virtual false, abstract: false, final false
inline void SetAxisValue(int32_t  index, float_t  value) ;

/// @brief Method SetAxisValues, addr 0x18187f440, size 0x190, virtual false, abstract: false, final false
inline void SetAxisValues(::System::Collections::Generic::IList_1<float_t>*  values) ;

/// @brief Method SetButtonValue, addr 0x18187f5d0, size 0x60, virtual false, abstract: false, final false
inline void SetButtonValue(int32_t  index, bool  value) ;

/// @brief Method SetButtonValues, addr 0x18187f630, size 0x1e0, virtual false, abstract: false, final false
inline void SetButtonValues(::System::Collections::Generic::IList_1<bool>*  values) ;

/// @brief Method System.IDisposable.Dispose, addr 0x1816db780, size 0x30, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method XABSrjOfFGnMKqeUzpurYlCfpOcJ, addr 0x18187f810, size 0x30, virtual false, abstract: false, final false
inline void XABSrjOfFGnMKqeUzpurYlCfpOcJ() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_AojglTSNBBhNJclGVlxZftuMYKOK() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_AojglTSNBBhNJclGVlxZftuMYKOK() ;

constexpr int32_t const& __cordl_internal_get_FdzAKWfmmdOBDArOhkqdQAKIIhKtC() const;

constexpr int32_t& __cordl_internal_get_FdzAKWfmmdOBDArOhkqdQAKIIhKtC() ;

constexpr int32_t const& __cordl_internal_get_MnTPCZAGtkqbwohNHAKMYgqGQTfg() const;

constexpr int32_t& __cordl_internal_get_MnTPCZAGtkqbwohNHAKMYgqGQTfg() ;

constexpr bool const& __cordl_internal_get_OoxuWBcepbZBNAjUJtPUFktZKQSE() const;

constexpr bool& __cordl_internal_get_OoxuWBcepbZBNAjUJtPUFktZKQSE() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_ZVeHoizqGjCgjbkCOAHXRNCzeSuJA() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_ZVeHoizqGjCgjbkCOAHXRNCzeSuJA() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_grMkCDaDFdKDCMLdlbKNaLrOMovfA() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_grMkCDaDFdKDCMLdlbKNaLrOMovfA() ;

constexpr void __cordl_internal_set_AojglTSNBBhNJclGVlxZftuMYKOK(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_FdzAKWfmmdOBDArOhkqdQAKIIhKtC(int32_t  value) ;

constexpr void __cordl_internal_set_MnTPCZAGtkqbwohNHAKMYgqGQTfg(int32_t  value) ;

constexpr void __cordl_internal_set_OoxuWBcepbZBNAjUJtPUFktZKQSE(bool  value) ;

constexpr void __cordl_internal_set_ZVeHoizqGjCgjbkCOAHXRNCzeSuJA(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_grMkCDaDFdKDCMLdlbKNaLrOMovfA(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x18187f840, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_axisCount, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_buttonCount() ;

/// @brief Method get_controllerExtension, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* get_controllerExtension() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method ljxxkoxqxzwlsaqyRgHxsxsZFoKJ, addr 0x181163a30, size 0xb0, virtual false, abstract: false, final false
inline void ljxxkoxqxzwlsaqyRgHxsxsZFoKJ() ;

/// @brief Method mQuzpYCOIwiumhZwPvUuQePCqfjQ, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void mQuzpYCOIwiumhZwPvUuQePCqfjQ() ;

/// @brief Method ucXAaEfHwEtUoQVGKRXCPlEZTcOWA, addr 0x181163ae0, size 0x20, virtual false, abstract: false, final false
inline void ucXAaEfHwEtUoQVGKRXCPlEZTcOWA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPlatformUnifiedControllerSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformUnifiedControllerSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPlatformUnifiedControllerSource(CustomPlatformUnifiedControllerSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformUnifiedControllerSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPlatformUnifiedControllerSource(CustomPlatformUnifiedControllerSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2300};

/// @brief Field MnTPCZAGtkqbwohNHAKMYgqGQTfg, offset: 0x10, size: 0x4, def value: None
 int32_t  ___MnTPCZAGtkqbwohNHAKMYgqGQTfg;

/// @brief Field FdzAKWfmmdOBDArOhkqdQAKIIhKtC, offset: 0x14, size: 0x4, def value: None
 int32_t  ___FdzAKWfmmdOBDArOhkqdQAKIIhKtC;

/// @brief Field ZVeHoizqGjCgjbkCOAHXRNCzeSuJA, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<bool>  ___ZVeHoizqGjCgjbkCOAHXRNCzeSuJA;

/// @brief Field grMkCDaDFdKDCMLdlbKNaLrOMovfA, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<bool>  ___grMkCDaDFdKDCMLdlbKNaLrOMovfA;

/// @brief Field AojglTSNBBhNJclGVlxZftuMYKOK, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ___AojglTSNBBhNJclGVlxZftuMYKOK;

/// @brief Field OoxuWBcepbZBNAjUJtPUFktZKQSE, offset: 0x30, size: 0x1, def value: None
 bool  ___OoxuWBcepbZBNAjUJtPUFktZKQSE;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource, ___MnTPCZAGtkqbwohNHAKMYgqGQTfg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource, ___FdzAKWfmmdOBDArOhkqdQAKIIhKtC) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource, ___ZVeHoizqGjCgjbkCOAHXRNCzeSuJA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource, ___grMkCDaDFdKDCMLdlbKNaLrOMovfA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource, ___AojglTSNBBhNJclGVlxZftuMYKOK) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource, ___OoxuWBcepbZBNAjUJtPUFktZKQSE) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
