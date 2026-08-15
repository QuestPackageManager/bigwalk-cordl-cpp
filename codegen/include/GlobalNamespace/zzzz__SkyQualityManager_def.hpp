#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyQualityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SkyQualityManager)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
class LightQualityData;
}
namespace GlobalNamespace {
struct SkyQualityManager__EnableAfterWait_d__7;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
class SkyQualityManager;
}
namespace GlobalNamespace {
struct SkyQualityManager__EnableAfterWait_d__7;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkyQualityManager*);
MARK_VAL_T(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyQualityManager*, "", "SkyQualityManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7, "", "SkyQualityManager/<EnableAfterWait>d__7");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: SkyQualityManager/<EnableAfterWait>d__7
struct CORDL_TYPE SkyQualityManager__EnableAfterWait_d__7 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042d890, size 0x670, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SkyQualityManager__EnableAfterWait_d__7() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SkyQualityManager>", modifiers: "", def_value: None }, CppParam { name: "_myId_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SkyQualityManager__EnableAfterWait_d__7(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::SkyQualityManager>  __4__this, int32_t  _myId_5__2, int32_t  _i_5__3, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SkyQualityManager>  __4__this;

/// @brief Field <myId>5__2, offset: 0x18, size: 0x4, def value: None
 int32_t  _myId_5__2;

/// @brief Field <i>5__3, offset: 0x1c, size: 0x4, def value: None
 int32_t  _i_5__3;

/// @brief Field <>u__1, offset: 0x20, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7, _myId_5__2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7, _i_5__3) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7, __u__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7, __u__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkyQualityManager
class CORDL_TYPE SkyQualityManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _EnableAfterWait_d__7 = ::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7;

/// @brief Field _currentTimerId, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTimerId, put=__cordl_internal_set__currentTimerId)) int32_t  _currentTimerId;

/// @brief Field ignoreQualityChanges, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreQualityChanges, put=__cordl_internal_set_ignoreQualityChanges)) bool  ignoreQualityChanges;

/// @brief Field mappings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mappings, put=__cordl_internal_set_mappings)) ::ArrayW<int32_t>  mappings;

/// @brief Field sunLight, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunLight, put=__cordl_internal_set_sunLight)) ::UnityW<::UnityEngine::Light>  sunLight;

/// @brief Field sunlightQualityData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunlightQualityData, put=__cordl_internal_set_sunlightQualityData)) ::UnityW<::GlobalNamespace::LightQualityData>  sunlightQualityData;

/// @brief Method ApplyQualityEffects, addr 0x180429e10, size 0x140, virtual false, abstract: false, final false
inline void ApplyQualityEffects(int32_t  qualityLevel) ;

/// @brief Method Awake, addr 0x180429f50, size 0x150, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableAfterWait, addr 0x18042a0a0, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid EnableAfterWait() ;

static inline ::GlobalNamespace::SkyQualityManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x18042a110, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18042a200, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetVegetationShadowCullDistance, addr 0x18042a2f0, size 0x10, virtual false, abstract: false, final false
static inline void SetVegetationShadowCullDistance(float_t  distance) ;

constexpr int32_t const& __cordl_internal_get__currentTimerId() const;

constexpr int32_t& __cordl_internal_get__currentTimerId() ;

constexpr bool const& __cordl_internal_get_ignoreQualityChanges() const;

constexpr bool& __cordl_internal_get_ignoreQualityChanges() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_mappings() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_mappings() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_sunLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_sunLight() ;

constexpr ::UnityW<::GlobalNamespace::LightQualityData> const& __cordl_internal_get_sunlightQualityData() const;

constexpr ::UnityW<::GlobalNamespace::LightQualityData>& __cordl_internal_get_sunlightQualityData() ;

constexpr void __cordl_internal_set__currentTimerId(int32_t  value) ;

constexpr void __cordl_internal_set_ignoreQualityChanges(bool  value) ;

constexpr void __cordl_internal_set_mappings(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_sunLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_sunlightQualityData(::UnityW<::GlobalNamespace::LightQualityData>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkyQualityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkyQualityManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkyQualityManager(SkyQualityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkyQualityManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkyQualityManager(SkyQualityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5200};

/// @brief Field sunLight, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___sunLight;

/// @brief Field sunlightQualityData, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightQualityData>  ___sunlightQualityData;

/// @brief Field mappings, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___mappings;

/// @brief Field ignoreQualityChanges, offset: 0x38, size: 0x1, def value: None
 bool  ___ignoreQualityChanges;

/// @brief Field _currentTimerId, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____currentTimerId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyQualityManager, ___sunLight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager, ___sunlightQualityData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager, ___mappings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager, ___ignoreQualityChanges) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyQualityManager, ____currentTimerId) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyQualityManager) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
