#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraQualityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraQualityManager)
namespace GlobalNamespace {
class CameraQualityManager__ResetToStreamingDetails_d__14;
}
namespace GlobalNamespace {
class CameraQualityManager__SetQuickChange_d__12;
}
namespace MA::Flora {
class FloraRenderSettings;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class CameraQualityManager;
}
namespace GlobalNamespace {
class CameraQualityManager__ResetToStreamingDetails_d__14;
}
namespace GlobalNamespace {
class CameraQualityManager__SetQuickChange_d__12;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CameraQualityManager*);
MARK_REF_T(::GlobalNamespace::CameraQualityManager__ResetToStreamingDetails_d__14*);
MARK_REF_T(::GlobalNamespace::CameraQualityManager__SetQuickChange_d__12*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraQualityManager*, "", "CameraQualityManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraQualityManager__ResetToStreamingDetails_d__14*, "", "CameraQualityManager/<ResetToStreamingDetails>d__14");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraQualityManager__SetQuickChange_d__12*, "", "CameraQualityManager/<SetQuickChange>d__12");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CameraQualityManager/<ResetToStreamingDetails>d__14
class CORDL_TYPE CameraQualityManager__ResetToStreamingDetails_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CameraQualityManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18042ed40, size 0xa0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::CameraQualityManager__ResetToStreamingDetails_d__14* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CameraQualityManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CameraQualityManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CameraQualityManager>  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraQualityManager__ResetToStreamingDetails_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraQualityManager__ResetToStreamingDetails_d__14", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraQualityManager__ResetToStreamingDetails_d__14(CameraQualityManager__ResetToStreamingDetails_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraQualityManager__ResetToStreamingDetails_d__14", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraQualityManager__ResetToStreamingDetails_d__14(CameraQualityManager__ResetToStreamingDetails_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5177};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CameraQualityManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraQualityManager__ResetToStreamingDetails_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraQualityManager__ResetToStreamingDetails_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraQualityManager__ResetToStreamingDetails_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraQualityManager__ResetToStreamingDetails_d__14) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CameraQualityManager/<SetQuickChange>d__12
class CORDL_TYPE CameraQualityManager__SetQuickChange_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CameraQualityManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18042f220, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::CameraQualityManager__SetQuickChange_d__12* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CameraQualityManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CameraQualityManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CameraQualityManager>  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraQualityManager__SetQuickChange_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraQualityManager__SetQuickChange_d__12", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraQualityManager__SetQuickChange_d__12(CameraQualityManager__SetQuickChange_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraQualityManager__SetQuickChange_d__12", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraQualityManager__SetQuickChange_d__12(CameraQualityManager__SetQuickChange_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5178};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CameraQualityManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraQualityManager__SetQuickChange_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraQualityManager__SetQuickChange_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraQualityManager__SetQuickChange_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraQualityManager__SetQuickChange_d__12) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CameraQualityManager
class CORDL_TYPE CameraQualityManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ResetToStreamingDetails_d__14 = ::GlobalNamespace::CameraQualityManager__ResetToStreamingDetails_d__14;

using _SetQuickChange_d__12 = ::GlobalNamespace::CameraQualityManager__SetQuickChange_d__12;

 __declspec(property(get=get_CurrentDetailDistance)) float_t  CurrentDetailDistance;

/// @brief Field baseCrossFadeDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseCrossFadeDuration, put=__cordl_internal_set_baseCrossFadeDuration)) float_t  baseCrossFadeDuration;

/// @brief Field currentDetailDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDetailDistance, put=__cordl_internal_set_currentDetailDistance)) float_t  currentDetailDistance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::CameraQualityManager>  instance;

/// @brief Field isZoomMode, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isZoomMode, put=__cordl_internal_set_isZoomMode)) bool  isZoomMode;

/// @brief Field qualityLevel, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_qualityLevel, put=__cordl_internal_set_qualityLevel)) int32_t  qualityLevel;

/// @brief Field resetCoroutine, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetCoroutine, put=__cordl_internal_set_resetCoroutine)) ::UnityEngine::Coroutine*  resetCoroutine;

/// @brief Field setCoroutine, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_setCoroutine, put=__cordl_internal_set_setCoroutine)) ::UnityEngine::Coroutine*  setCoroutine;

/// @brief Method ApplyQualityEffects, addr 0x18041d910, size 0x30, virtual false, abstract: false, final false
inline void ApplyQualityEffects(int32_t  newQualityLevel) ;

/// @brief Method Awake, addr 0x18041d940, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoResetToStreamingDetails, addr 0x18041da10, size 0xd0, virtual false, abstract: false, final false
inline void DoResetToStreamingDetails() ;

/// @brief Method GetFloraRenderSettings, addr 0x18041dae0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::MA::Flora::FloraRenderSettings> GetFloraRenderSettings() ;

static inline ::GlobalNamespace::CameraQualityManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x18041db30, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18041dc20, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method QuickChange, addr 0x18041dd10, size 0xc0, virtual false, abstract: false, final false
inline void QuickChange() ;

/// @brief Method RefreshDrawDistance, addr 0x18041ddd0, size 0xf0, virtual false, abstract: false, final false
inline void RefreshDrawDistance() ;

/// @brief Method ResetToStreamingDetails, addr 0x18041dec0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ResetToStreamingDetails() ;

/// @brief Method SetQuickChange, addr 0x18041df10, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SetQuickChange() ;

/// @brief Method SetToGoodbyeVoidMode, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void SetToGoodbyeVoidMode() ;

/// @brief Method SetZoomMode, addr 0x18041df60, size 0x120, virtual false, abstract: false, final false
inline void SetZoomMode(bool  value) ;

constexpr float_t const& __cordl_internal_get_baseCrossFadeDuration() const;

constexpr float_t& __cordl_internal_get_baseCrossFadeDuration() ;

constexpr float_t const& __cordl_internal_get_currentDetailDistance() const;

constexpr float_t& __cordl_internal_get_currentDetailDistance() ;

constexpr bool const& __cordl_internal_get_isZoomMode() const;

constexpr bool& __cordl_internal_get_isZoomMode() ;

constexpr int32_t const& __cordl_internal_get_qualityLevel() const;

constexpr int32_t& __cordl_internal_get_qualityLevel() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_resetCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_resetCoroutine() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_setCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_setCoroutine() ;

constexpr void __cordl_internal_set_baseCrossFadeDuration(float_t  value) ;

constexpr void __cordl_internal_set_currentDetailDistance(float_t  value) ;

constexpr void __cordl_internal_set_isZoomMode(bool  value) ;

constexpr void __cordl_internal_set_qualityLevel(int32_t  value) ;

constexpr void __cordl_internal_set_resetCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_setCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::CameraQualityManager> getStaticF_instance() ;

/// @brief Method get_CurrentDetailDistance, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_CurrentDetailDistance() ;

/// @brief Method get_Instance, addr 0x18041e080, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::CameraQualityManager> get_Instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::CameraQualityManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraQualityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraQualityManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraQualityManager(CameraQualityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraQualityManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraQualityManager(CameraQualityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5179};

/// @brief Field isZoomMode, offset: 0x20, size: 0x1, def value: None
 bool  ___isZoomMode;

/// @brief Field qualityLevel, offset: 0x24, size: 0x4, def value: None
 int32_t  ___qualityLevel;

/// @brief Field currentDetailDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___currentDetailDistance;

/// @brief Field setCoroutine, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___setCoroutine;

/// @brief Field resetCoroutine, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___resetCoroutine;

/// @brief Field baseCrossFadeDuration, offset: 0x40, size: 0x4, def value: None
 float_t  ___baseCrossFadeDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraQualityManager, ___isZoomMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraQualityManager, ___qualityLevel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraQualityManager, ___currentDetailDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraQualityManager, ___setCoroutine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraQualityManager, ___resetCoroutine) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraQualityManager, ___baseCrossFadeDuration) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraQualityManager) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
