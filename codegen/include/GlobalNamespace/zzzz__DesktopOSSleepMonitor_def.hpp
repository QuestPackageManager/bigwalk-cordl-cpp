#pragma once
// IWYU pragma private; include "GlobalNamespace/DesktopOSSleepMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DesktopOSSleepMonitor)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
struct DesktopOSSleepMonitor__OnOSResume_d__4;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class DesktopOSSleepMonitor;
}
namespace GlobalNamespace {
struct DesktopOSSleepMonitor__OnOSResume_d__4;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DesktopOSSleepMonitor*);
MARK_VAL_T(::GlobalNamespace::DesktopOSSleepMonitor__OnOSResume_d__4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DesktopOSSleepMonitor*, "", "DesktopOSSleepMonitor");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DesktopOSSleepMonitor__OnOSResume_d__4, "", "DesktopOSSleepMonitor/<OnOSResume>d__4");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: DesktopOSSleepMonitor/<OnOSResume>d__4
struct CORDL_TYPE DesktopOSSleepMonitor__OnOSResume_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18039f5d0, size 0x230, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DesktopOSSleepMonitor__OnOSResume_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "double_t", modifiers: "", def_value: None }]
constexpr DesktopOSSleepMonitor__OnOSResume_d__4(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, double_t  delta) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5635};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field delta, offset: 0x10, size: 0x8, def value: None
 double_t  delta;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DesktopOSSleepMonitor__OnOSResume_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DesktopOSSleepMonitor__OnOSResume_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DesktopOSSleepMonitor__OnOSResume_d__4, delta) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DesktopOSSleepMonitor__OnOSResume_d__4) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DesktopOSSleepMonitor
class CORDL_TYPE DesktopOSSleepMonitor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnOSResume_d__4 = ::GlobalNamespace::DesktopOSSleepMonitor__OnOSResume_d__4;

/// @brief Field _lastUtcTicks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastUtcTicks, put=__cordl_internal_set__lastUtcTicks)) int64_t  _lastUtcTicks;

static inline ::GlobalNamespace::DesktopOSSleepMonitor* New_ctor() ;

/// @brief Method OnEnable, addr 0x180392680, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnOSResume, addr 0x1803926c0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid OnOSResume(double_t  delta) ;

/// @brief Method Update, addr 0x180392720, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

constexpr int64_t const& __cordl_internal_get__lastUtcTicks() const;

constexpr int64_t& __cordl_internal_get__lastUtcTicks() ;

constexpr void __cordl_internal_set__lastUtcTicks(int64_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DesktopOSSleepMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DesktopOSSleepMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DesktopOSSleepMonitor(DesktopOSSleepMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DesktopOSSleepMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DesktopOSSleepMonitor(DesktopOSSleepMonitor const& ) = delete;

/// @brief Field ThresholdSec offset 0xffffffff size 0x8
static constexpr double_t  ThresholdSec{static_cast<double_t>(10.0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5636};

/// @brief Field _lastUtcTicks, offset: 0x20, size: 0x8, def value: None
 int64_t  ____lastUtcTicks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DesktopOSSleepMonitor, ____lastUtcTicks) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DesktopOSSleepMonitor) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
