#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/RuntimeHelpersAbstraction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeHelpersAbstraction)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class RuntimeHelpersAbstraction;
}
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction*, "Cysharp.Threading.Tasks.Internal", "RuntimeHelpersAbstraction");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1, "Cysharp.Threading.Tasks.Internal", "RuntimeHelpersAbstraction/WellKnownNoReferenceContainsType`1");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.RuntimeHelpersAbstraction/WellKnownNoReferenceContainsType`1<T>
class CORDL_TYPE RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1 : public ::System::Object {
public:
// Declarations
/// @brief Field IsWellKnownType, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_IsWellKnownType, put=setStaticF_IsWellKnownType)) bool  IsWellKnownType;

static inline bool getStaticF_IsWellKnownType() ;

static inline void setStaticF_IsWellKnownType(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1(RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1(RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14722};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.RuntimeHelpersAbstraction
class CORDL_TYPE RuntimeHelpersAbstraction : public ::System::Object {
public:
// Declarations
template<typename T>
using WellKnownNoReferenceContainsType_1 = ::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1<T>;

/// @brief Method IsWellKnownNoReferenceContainsType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsWellKnownNoReferenceContainsType() ;

/// @brief Method WellKnownNoReferenceContainsTypeInitialize, addr 0x181e7fee0, size 0x2c0, virtual false, abstract: false, final false
static inline bool WellKnownNoReferenceContainsTypeInitialize(::System::Type*  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeHelpersAbstraction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeHelpersAbstraction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeHelpersAbstraction(RuntimeHelpersAbstraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeHelpersAbstraction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeHelpersAbstraction(RuntimeHelpersAbstraction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14723};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
