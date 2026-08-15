#pragma once
// IWYU pragma private; include "Animancer/FSM/ReverseComparer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReverseComparer_1)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace Animancer::FSM {
template<typename T>
class ReverseComparer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::FSM::ReverseComparer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::FSM::ReverseComparer_1, "Animancer.FSM", "ReverseComparer`1");
// Dependencies System.Object
namespace Animancer::FSM {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.FSM.ReverseComparer`1<T>
class CORDL_TYPE ReverseComparer_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Animancer::FSM::ReverseComparer_1<T>*  Instance;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
constexpr operator  ::System::Collections::Generic::IComparer_1<T>*() noexcept;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t Compare(T  x, T  y) ;

static inline ::Animancer::FSM::ReverseComparer_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Animancer::FSM::ReverseComparer_1<T>* getStaticF_Instance() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
constexpr ::System::Collections::Generic::IComparer_1<T>* i___System__Collections__Generic__IComparer_1_T_() noexcept;

static inline void setStaticF_Instance(::Animancer::FSM::ReverseComparer_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReverseComparer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReverseComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReverseComparer_1(ReverseComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReverseComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReverseComparer_1(ReverseComparer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21352};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
