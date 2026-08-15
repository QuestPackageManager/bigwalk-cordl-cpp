#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformLogic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlatformLogic)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
namespace Shipmate::Porting {
struct AbstractPlatformLogic__SetPlatform_d__3;
}
namespace Shipmate::Porting {
class AbstractPlayablePlatform;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace Shipmate::Porting {
class AbstractPlatformLogic;
}
namespace Shipmate::Porting {
struct AbstractPlatformLogic__SetPlatform_d__3;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlatformLogic*);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformLogic__SetPlatform_d__3);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformLogic*, "Shipmate.Porting", "AbstractPlatformLogic");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformLogic__SetPlatform_d__3, "Shipmate.Porting", "AbstractPlatformLogic/<SetPlatform>d__3");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformLogic/<SetPlatform>d__3
struct CORDL_TYPE AbstractPlatformLogic__SetPlatform_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac8f30, size 0xa0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformLogic__SetPlatform_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformLogic*", modifiers: "", def_value: None }, CppParam { name: "aPlatform", ty: "::Shipmate::Porting::AbstractPlayablePlatform*", modifiers: "", def_value: None }]
constexpr AbstractPlatformLogic__SetPlatform_d__3(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLogic*  __4__this, ::Shipmate::Porting::AbstractPlayablePlatform*  aPlatform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20612};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformLogic*  __4__this;

/// @brief Field aPlatform, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlayablePlatform*  aPlatform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLogic__SetPlatform_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLogic__SetPlatform_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLogic__SetPlatform_d__3, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLogic__SetPlatform_d__3, aPlatform) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformLogic__SetPlatform_d__3) == 0x28, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformLogic
class CORDL_TYPE AbstractPlatformLogic : public ::System::Object {
public:
// Declarations
using _SetPlatform_d__3 = ::Shipmate::Porting::AbstractPlatformLogic__SetPlatform_d__3;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

/// @brief Field mPlatform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mPlatform, put=__cordl_internal_set_mPlatform)) ::Shipmate::Porting::AbstractPlayablePlatform*  mPlatform;

/// @brief Method Destroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method DoUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void DoUpdate() ;

static inline ::Shipmate::Porting::AbstractPlatformLogic* New_ctor() ;

/// @brief Method SetPlatform, addr 0x181ac5710, size 0xa0, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask SetPlatform(::Shipmate::Porting::AbstractPlayablePlatform*  aPlatform) ;

constexpr ::Shipmate::Porting::AbstractPlayablePlatform* const& __cordl_internal_get_mPlatform() const;

constexpr ::Shipmate::Porting::AbstractPlayablePlatform*& __cordl_internal_get_mPlatform() ;

constexpr void __cordl_internal_set_mPlatform(::Shipmate::Porting::AbstractPlayablePlatform*  value) ;

/// @brief Method .ctor, addr 0x181ac5800, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformLogic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformLogic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformLogic(AbstractPlatformLogic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformLogic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformLogic(AbstractPlatformLogic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20613};

/// @brief Field mPlatform, offset: 0x10, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlayablePlatform*  ___mPlatform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLogic, ___mPlatform) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformLogic) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting
