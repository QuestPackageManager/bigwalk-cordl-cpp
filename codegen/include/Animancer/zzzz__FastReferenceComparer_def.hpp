#pragma once
// IWYU pragma private; include "Animancer/FastReferenceComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FastReferenceComparer)
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer {
class FastReferenceComparer;
}
// Write type traits
MARK_REF_T(::Animancer::FastReferenceComparer*);
DEFINE_IL2CPP_CLASS(::Animancer::FastReferenceComparer*, "Animancer", "FastReferenceComparer");
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.FastReferenceComparer
class CORDL_TYPE FastReferenceComparer : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Animancer::FastReferenceComparer*  Instance;

/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*() noexcept;

static inline ::Animancer::FastReferenceComparer* New_ctor() ;

/// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.Equals, addr 0x1802edb00, size 0x10, virtual true, abstract: false, final true
inline bool System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object*  x, ::System::Object*  y) ;

/// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode, addr 0x1802eda80, size 0x30, virtual true, abstract: false, final true
inline int32_t System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object*  obj) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Animancer::FastReferenceComparer* getStaticF_Instance() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* i___System__Collections__Generic__IEqualityComparer_1___System__Object__() noexcept;

static inline void setStaticF_Instance(::Animancer::FastReferenceComparer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastReferenceComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastReferenceComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastReferenceComparer(FastReferenceComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastReferenceComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastReferenceComparer(FastReferenceComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18075};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::FastReferenceComparer) == 0x10, "Size mismatch!");

} // namespace end def Animancer
