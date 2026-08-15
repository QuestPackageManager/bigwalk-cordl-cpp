#pragma once
// IWYU pragma private; include "Rewired/UnityUnifiedMouseSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityUnifiedMouseSource)
namespace Rewired::Interfaces {
class IGetSetEnabled;
}
namespace Rewired::Interfaces {
class IUnifiedMouseSource;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
struct InputSource;
}
namespace Rewired {
class UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU;
}
namespace Rewired {
class UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA;
}
namespace Rewired {
template<typename T>
class UpdateLoopDataSet_1;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
class UnityUnifiedMouseSource;
}
namespace Rewired {
class UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU;
}
namespace Rewired {
class UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA;
}
// Write type traits
MARK_REF_T(::Rewired::UnityUnifiedMouseSource*);
MARK_REF_T(::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*);
MARK_REF_T(::Rewired::UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA*);
DEFINE_IL2CPP_CLASS(::Rewired::UnityUnifiedMouseSource*, "Rewired", "UnityUnifiedMouseSource");
DEFINE_IL2CPP_CLASS(::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*, "Rewired", "UnityUnifiedMouseSource/AVupMUVNFmtElymyKhdXnvKZqOXU");
DEFINE_IL2CPP_CLASS(::Rewired::UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA*, "Rewired", "UnityUnifiedMouseSource/SiVFzYGEHNbveXHuVbEBzEkpADUXA");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.UnityUnifiedMouseSource/AVupMUVNFmtElymyKhdXnvKZqOXU
class CORDL_TYPE UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU : public ::System::Object {
public:
// Declarations
/// @brief Field JoMdWdhoEUjXSbeIUSpvUoSDnlWbb, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_JoMdWdhoEUjXSbeIUSpvUoSDnlWbb, put=__cordl_internal_set_JoMdWdhoEUjXSbeIUSpvUoSDnlWbb)) ::ArrayW<bool>  JoMdWdhoEUjXSbeIUSpvUoSDnlWbb;

/// @brief Field pfheVWFYaTKHQUlHddyCAmZjMzJXb, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pfheVWFYaTKHQUlHddyCAmZjMzJXb, put=__cordl_internal_set_pfheVWFYaTKHQUlHddyCAmZjMzJXb)) ::ArrayW<float_t>  pfheVWFYaTKHQUlHddyCAmZjMzJXb;

/// @brief Method LYiGbJCofIdZouEyMPdKGkvNwZdZA, addr 0x18195b9e0, size 0x60, virtual false, abstract: false, final false
inline void LYiGbJCofIdZouEyMPdKGkvNwZdZA(::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method QmjVDmbkyMwpFvFZOeIeeeafeZbm, addr 0x180ba5d20, size 0x4f0, virtual false, abstract: false, final false
inline void QmjVDmbkyMwpFvFZOeIeeeafeZbm() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_JoMdWdhoEUjXSbeIUSpvUoSDnlWbb() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_JoMdWdhoEUjXSbeIUSpvUoSDnlWbb() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_pfheVWFYaTKHQUlHddyCAmZjMzJXb() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_pfheVWFYaTKHQUlHddyCAmZjMzJXb() ;

constexpr void __cordl_internal_set_JoMdWdhoEUjXSbeIUSpvUoSDnlWbb(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_pfheVWFYaTKHQUlHddyCAmZjMzJXb(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x18195ba40, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method fnJKMNmMgFeDrmtgLROLPiUCELNn, addr 0x18195baa0, size 0x50, virtual false, abstract: false, final false
inline void fnJKMNmMgFeDrmtgLROLPiUCELNn() ;

/// @brief Method usndjAjWXVgwxAKOFMdGMosziiKtA, addr 0x18195baf0, size 0x80, virtual false, abstract: false, final false
inline void usndjAjWXVgwxAKOFMdGMosziiKtA(::ArrayW<bool>  _cordl_fixed_empty_name_whitespace, ::ArrayW<float_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU(UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU(UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1991};

/// @brief Field pfheVWFYaTKHQUlHddyCAmZjMzJXb, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ___pfheVWFYaTKHQUlHddyCAmZjMzJXb;

/// @brief Field JoMdWdhoEUjXSbeIUSpvUoSDnlWbb, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<bool>  ___JoMdWdhoEUjXSbeIUSpvUoSDnlWbb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU, ___pfheVWFYaTKHQUlHddyCAmZjMzJXb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU, ___JoMdWdhoEUjXSbeIUSpvUoSDnlWbb) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.UnityUnifiedMouseSource/SiVFzYGEHNbveXHuVbEBzEkpADUXA
class CORDL_TYPE UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Func_1<::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*>*  __9__20_0;

/// @brief Method AKqpCPbvymhlFlVBnoXdsXBnttCx, addr 0x181966860, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU* AKqpCPbvymhlFlVBnoXdsXBnttCx() ;

static inline ::Rewired::UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA* getStaticF___9() ;

static inline ::System::Func_1<::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*>* getStaticF___9__20_0() ;

static inline void setStaticF___9(::Rewired::UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA*  value) ;

static inline void setStaticF___9__20_0(::System::Func_1<::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA(UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA(UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1992};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.UnityUnifiedMouseSource
class CORDL_TYPE UnityUnifiedMouseSource : public ::System::Object {
public:
// Declarations
using AVupMUVNFmtElymyKhdXnvKZqOXU = ::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU;

using SiVFzYGEHNbveXHuVbEBzEkpADUXA = ::Rewired::UnityUnifiedMouseSource_SiVFzYGEHNbveXHuVbEBzEkpADUXA;

/// @brief Field JTQGTKcHpVrachFZaPEeVtoroVsR, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_JTQGTKcHpVrachFZaPEeVtoroVsR, put=__cordl_internal_set_JTQGTKcHpVrachFZaPEeVtoroVsR)) bool  JTQGTKcHpVrachFZaPEeVtoroVsR;

/// @brief Field QoAVzuMTiuMlQNkgDYHIYKTsPZKS, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_QoAVzuMTiuMlQNkgDYHIYKTsPZKS, put=__cordl_internal_set_QoAVzuMTiuMlQNkgDYHIYKTsPZKS)) bool  QoAVzuMTiuMlQNkgDYHIYKTsPZKS;

/// @brief Field VFyPUKUXsquRUBZPVWamnZtCniRS, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_VFyPUKUXsquRUBZPVWamnZtCniRS, put=__cordl_internal_set_VFyPUKUXsquRUBZPVWamnZtCniRS)) ::ArrayW<float_t>  VFyPUKUXsquRUBZPVWamnZtCniRS;

/// @brief Field VwBltDtHkACLSdJTgNVHFhvheFQLb, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_VwBltDtHkACLSdJTgNVHFhvheFQLb, put=__cordl_internal_set_VwBltDtHkACLSdJTgNVHFhvheFQLb)) ::Rewired::UpdateLoopDataSet_1<::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*>*  VwBltDtHkACLSdJTgNVHFhvheFQLb;

/// @brief Field YlfqmuIBBJiYQMpftsLENbtLNlzg, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_YlfqmuIBBJiYQMpftsLENbtLNlzg, put=__cordl_internal_set_YlfqmuIBBJiYQMpftsLENbtLNlzg)) ::ArrayW<bool>  YlfqmuIBBJiYQMpftsLENbtLNlzg;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_controllerExtension)) ::Rewired::Controller_Extension*  controllerExtension;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_hardwareMap)) ::Rewired::HardwareControllerMap_Game*  hardwareMap;

 __declspec(property(get=get_inputSource)) ::Rewired::InputSource  inputSource;

 __declspec(property(get=get_mousePosition)) ::UnityEngine::Vector2  mousePosition;

/// @brief Field tnPCGFIbAxMiYnkrprZTnODZxGAoA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tnPCGFIbAxMiYnkrprZTnODZxGAoA, put=setStaticF_tnPCGFIbAxMiYnkrprZTnODZxGAoA)) ::Rewired::HardwareControllerMap_Game*  tnPCGFIbAxMiYnkrprZTnODZxGAoA;

/// @brief Convert operator to "::Rewired::Interfaces::IGetSetEnabled"
constexpr operator  ::Rewired::Interfaces::IGetSetEnabled*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IUnifiedMouseSource"
constexpr operator  ::Rewired::Interfaces::IUnifiedMouseSource*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clear, addr 0x181967380, size 0xb0, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method CreateHardwareMap, addr 0x181967430, size 0x4d0, virtual false, abstract: false, final false
static inline ::Rewired::HardwareControllerMap_Game* CreateHardwareMap() ;

/// @brief Method Dispose, addr 0x1819679d0, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181967900, size 0xd0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181967a00, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetHardwareElementType, addr 0x181967a20, size 0x80, virtual false, abstract: false, final false
static inline ::Rewired::ControllerElementType GetHardwareElementType(int32_t  elementIdentifierId) ;

static inline ::Rewired::UnityUnifiedMouseSource* New_ctor() ;

/// @brief Method PKHuDsIQtsFWLIBzajdGDnpOuIuI, addr 0x181967aa0, size 0x40, virtual false, abstract: false, final false
inline void PKHuDsIQtsFWLIBzajdGDnpOuIuI(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method UpdateInputData, addr 0x181967ae0, size 0xc0, virtual true, abstract: false, final true
inline void UpdateInputData(::Rewired::ControllerDataUpdater*  dataUpdater) ;

constexpr bool const& __cordl_internal_get_JTQGTKcHpVrachFZaPEeVtoroVsR() const;

constexpr bool& __cordl_internal_get_JTQGTKcHpVrachFZaPEeVtoroVsR() ;

constexpr bool const& __cordl_internal_get_QoAVzuMTiuMlQNkgDYHIYKTsPZKS() const;

constexpr bool& __cordl_internal_get_QoAVzuMTiuMlQNkgDYHIYKTsPZKS() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_VFyPUKUXsquRUBZPVWamnZtCniRS() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_VFyPUKUXsquRUBZPVWamnZtCniRS() ;

constexpr ::Rewired::UpdateLoopDataSet_1<::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*>* const& __cordl_internal_get_VwBltDtHkACLSdJTgNVHFhvheFQLb() const;

constexpr ::Rewired::UpdateLoopDataSet_1<::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*>*& __cordl_internal_get_VwBltDtHkACLSdJTgNVHFhvheFQLb() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_YlfqmuIBBJiYQMpftsLENbtLNlzg() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_YlfqmuIBBJiYQMpftsLENbtLNlzg() ;

constexpr void __cordl_internal_set_JTQGTKcHpVrachFZaPEeVtoroVsR(bool  value) ;

constexpr void __cordl_internal_set_QoAVzuMTiuMlQNkgDYHIYKTsPZKS(bool  value) ;

constexpr void __cordl_internal_set_VFyPUKUXsquRUBZPVWamnZtCniRS(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_VwBltDtHkACLSdJTgNVHFhvheFQLb(::Rewired::UpdateLoopDataSet_1<::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*>*  value) ;

constexpr void __cordl_internal_set_YlfqmuIBBJiYQMpftsLENbtLNlzg(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x181967ba0, size 0x290, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::HardwareControllerMap_Game* getStaticF_tnPCGFIbAxMiYnkrprZTnODZxGAoA() ;

/// @brief Method get_axisCount, addr 0x180309580, size 0x10, virtual true, abstract: false, final true
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0x180feb5f0, size 0x28d50, virtual true, abstract: false, final true
inline int32_t get_buttonCount() ;

/// @brief Method get_controllerExtension, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::Controller_Extension* get_controllerExtension() ;

/// @brief Method get_enabled, addr 0x1802f1be0, size 0x10, virtual true, abstract: false, final true
inline bool get_enabled() ;

/// @brief Method get_hardwareMap, addr 0x181967e30, size 0x60, virtual true, abstract: false, final true
inline ::Rewired::HardwareControllerMap_Game* get_hardwareMap() ;

/// @brief Method get_inputSource, addr 0x181967330, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::InputSource get_inputSource() ;

/// @brief Method get_mousePosition, addr 0x181967e90, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_mousePosition() ;

/// @brief Convert to "::Rewired::Interfaces::IGetSetEnabled"
constexpr ::Rewired::Interfaces::IGetSetEnabled* i___Rewired__Interfaces__IGetSetEnabled() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IUnifiedMouseSource"
constexpr ::Rewired::Interfaces::IUnifiedMouseSource* i___Rewired__Interfaces__IUnifiedMouseSource() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method mbXhiboOJLqywrEccyceYjUxhWvC, addr 0x181967ee0, size 0x130, virtual false, abstract: false, final false
inline void mbXhiboOJLqywrEccyceYjUxhWvC() ;

static inline void setStaticF_tnPCGFIbAxMiYnkrprZTnODZxGAoA(::Rewired::HardwareControllerMap_Game*  value) ;

/// @brief Method set_enabled, addr 0x181968010, size 0xe0, virtual true, abstract: false, final true
inline void set_enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityUnifiedMouseSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityUnifiedMouseSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityUnifiedMouseSource(UnityUnifiedMouseSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityUnifiedMouseSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityUnifiedMouseSource(UnityUnifiedMouseSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1993};

/// @brief Field VwBltDtHkACLSdJTgNVHFhvheFQLb, offset: 0x10, size: 0x8, def value: None
 ::Rewired::UpdateLoopDataSet_1<::Rewired::UnityUnifiedMouseSource_AVupMUVNFmtElymyKhdXnvKZqOXU*>*  ___VwBltDtHkACLSdJTgNVHFhvheFQLb;

/// @brief Field VFyPUKUXsquRUBZPVWamnZtCniRS, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t>  ___VFyPUKUXsquRUBZPVWamnZtCniRS;

/// @brief Field YlfqmuIBBJiYQMpftsLENbtLNlzg, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<bool>  ___YlfqmuIBBJiYQMpftsLENbtLNlzg;

/// @brief Field QoAVzuMTiuMlQNkgDYHIYKTsPZKS, offset: 0x28, size: 0x1, def value: None
 bool  ___QoAVzuMTiuMlQNkgDYHIYKTsPZKS;

/// @brief Field JTQGTKcHpVrachFZaPEeVtoroVsR, offset: 0x29, size: 0x1, def value: None
 bool  ___JTQGTKcHpVrachFZaPEeVtoroVsR;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::UnityUnifiedMouseSource, ___VwBltDtHkACLSdJTgNVHFhvheFQLb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::UnityUnifiedMouseSource, ___VFyPUKUXsquRUBZPVWamnZtCniRS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::UnityUnifiedMouseSource, ___YlfqmuIBBJiYQMpftsLENbtLNlzg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::UnityUnifiedMouseSource, ___QoAVzuMTiuMlQNkgDYHIYKTsPZKS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::UnityUnifiedMouseSource, ___JTQGTKcHpVrachFZaPEeVtoroVsR) == 0x29, "Offset mismatch!");

static_assert(sizeof(::Rewired::UnityUnifiedMouseSource) == 0x30, "Size mismatch!");

} // namespace end def Rewired
