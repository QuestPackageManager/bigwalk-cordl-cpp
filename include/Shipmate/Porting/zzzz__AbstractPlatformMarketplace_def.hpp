#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformMarketplace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlatformMarketplace)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Shipmate::Porting {
struct AbstractPlatformMarketplace__OwnsDurable_d__0;
}
namespace Shipmate::Porting {
class MarketplaceDurable;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace Shipmate::Porting {
class AbstractPlatformMarketplace;
}
namespace Shipmate::Porting {
struct AbstractPlatformMarketplace__OwnsDurable_d__0;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlatformMarketplace*);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformMarketplace__OwnsDurable_d__0);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformMarketplace*, "Shipmate.Porting", "AbstractPlatformMarketplace");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformMarketplace__OwnsDurable_d__0, "Shipmate.Porting", "AbstractPlatformMarketplace/<OwnsDurable>d__0");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformMarketplace/<OwnsDurable>d__0
struct CORDL_TYPE AbstractPlatformMarketplace__OwnsDurable_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac8370, size 0x70, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformMarketplace__OwnsDurable_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }]
constexpr AbstractPlatformMarketplace__OwnsDurable_d__0(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformMarketplace__OwnsDurable_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformMarketplace__OwnsDurable_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformMarketplace__OwnsDurable_d__0) == 0x20, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Shipmate.Porting.AbstractPlatformLogic
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformMarketplace
class CORDL_TYPE AbstractPlatformMarketplace : public ::Shipmate::Porting::AbstractPlatformLogic {
public:
// Declarations
using _OwnsDurable_d__0 = ::Shipmate::Porting::AbstractPlatformMarketplace__OwnsDurable_d__0;

static inline ::Shipmate::Porting::AbstractPlatformMarketplace* New_ctor() ;

/// @brief Method OwnsDurable, addr 0x181ac58a0, size 0x70, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> OwnsDurable(::Shipmate::Porting::MarketplaceDurable*  aDurable) ;

/// @brief Method .ctor, addr 0x181ac5230, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformMarketplace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformMarketplace", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformMarketplace(AbstractPlatformMarketplace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformMarketplace", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformMarketplace(AbstractPlatformMarketplace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20618};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::AbstractPlatformMarketplace) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting
