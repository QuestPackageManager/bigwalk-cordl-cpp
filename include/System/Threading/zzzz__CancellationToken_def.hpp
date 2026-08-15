#pragma once
// IWYU pragma private; include "System/Threading/CancellationToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationToken)
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class CancellationToken___c;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class CancellationToken___c;
}
namespace System::Threading {
struct CancellationToken;
}
// Write type traits
MARK_REF_T(::System::Threading::CancellationToken___c*);
MARK_VAL_T(::System::Threading::CancellationToken);
DEFINE_IL2CPP_CLASS(::System::Threading::CancellationToken___c*, "System.Threading", "CancellationToken/<>c");
DEFINE_IL2CPP_CLASS(::System::Threading::CancellationToken, "System.Threading", "CancellationToken");
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.CancellationToken/<>c
class CORDL_TYPE CancellationToken___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Threading::CancellationToken___c*  __9;

static inline ::System::Threading::CancellationToken___c* New_ctor() ;

/// @brief Method <.cctor>b__26_0, addr 0x181767e80, size 0x40, virtual false, abstract: false, final false
inline void __cctor_b__26_0(::System::Object*  obj) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Threading::CancellationToken___c* getStaticF___9() ;

static inline void setStaticF___9(::System::Threading::CancellationToken___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancellationToken___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancellationToken___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CancellationToken___c(CancellationToken___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancellationToken___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancellationToken___c(CancellationToken___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{513};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::CancellationToken___c) == 0x10, "Size mismatch!");

} // namespace end def System::Threading
// Dependencies 
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.CancellationToken
struct CORDL_TYPE CancellationToken {
public:
// Declarations
using __c = ::System::Threading::CancellationToken___c;

 __declspec(property(get=get_CanBeCanceled)) bool  CanBeCanceled;

 __declspec(property(get=get_IsCancellationRequested)) bool  IsCancellationRequested;

/// @brief Field s_actionToActionObjShunt, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_actionToActionObjShunt, put=setStaticF_s_actionToActionObjShunt)) ::System::Action_1<::System::Object*>*  s_actionToActionObjShunt;

/// @brief Method Equals, addr 0x18175acd0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x1805a8500, size 0x20, virtual false, abstract: false, final false
inline bool Equals(::System::Threading::CancellationToken  other) ;

/// @brief Method GetHashCode, addr 0x18175ad40, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method InternalRegisterWithoutEC, addr 0x18175ada0, size 0x70, virtual false, abstract: false, final false
inline ::System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(::System::Action_1<::System::Object*>*  callback, ::System::Object*  state) ;

/// @brief Method Register, addr 0x18175ae10, size 0xd0, virtual false, abstract: false, final false
inline ::System::Threading::CancellationTokenRegistration Register(::System::Action*  callback) ;

/// @brief Method Register, addr 0x18175aee0, size 0xe0, virtual false, abstract: false, final false
inline ::System::Threading::CancellationTokenRegistration Register(::System::Action*  callback, bool  useSynchronizationContext) ;

/// @brief Method Register, addr 0x18175b120, size 0x80, virtual false, abstract: false, final false
inline ::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::System::Object*>*  callback, ::System::Object*  state, bool  useSynchronizationContext) ;

/// @brief Method Register, addr 0x18175afc0, size 0x160, virtual false, abstract: false, final false
inline ::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::System::Object*>*  callback, ::System::Object*  state, bool  useSynchronizationContext, bool  useExecutionContext) ;

/// @brief Method ThrowIfCancellationRequested, addr 0x18175b1a0, size 0x30, virtual false, abstract: false, final false
inline void ThrowIfCancellationRequested() ;

/// @brief Method ThrowOperationCanceledException, addr 0x18175b1e0, size 0x60, virtual false, abstract: false, final false
inline void ThrowOperationCanceledException() ;

/// @brief Method .ctor, addr 0x18175b2d0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(bool  canceled) ;

/// @brief Method .ctor, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationTokenSource*  source) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_s_actionToActionObjShunt() ;

/// @brief Method get_CanBeCanceled, addr 0x18175b340, size 0x20, virtual false, abstract: false, final false
inline bool get_CanBeCanceled() ;

/// @brief Method get_IsCancellationRequested, addr 0x18175b360, size 0x60, virtual false, abstract: false, final false
inline bool get_IsCancellationRequested() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken get_None() ;

/// @brief Method op_Equality, addr 0x1805a8800, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Threading::CancellationToken  left, ::System::Threading::CancellationToken  right) ;

/// @brief Method op_Inequality, addr 0x1805a8810, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Threading::CancellationToken  left, ::System::Threading::CancellationToken  right) ;

static inline void setStaticF_s_actionToActionObjShunt(::System::Action_1<::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CancellationToken() ;

// Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }]
constexpr CancellationToken(::System::Threading::CancellationTokenSource*  _source) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{514};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _source, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  _source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::CancellationToken, _source) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Threading::CancellationToken) == 0x8, "Size mismatch!");

} // namespace end def System::Threading
