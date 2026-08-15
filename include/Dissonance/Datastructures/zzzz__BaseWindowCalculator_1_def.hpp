#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/BaseWindowCalculator_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseWindowCalculator_1)
namespace Dissonance::Datastructures {
template<typename T>
class RingBuffer_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Datastructures {
template<typename T>
class BaseWindowCalculator_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Datastructures::BaseWindowCalculator_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Datastructures::BaseWindowCalculator_1, "Dissonance.Datastructures", "BaseWindowCalculator`1");
// Dependencies System.Object
namespace Dissonance::Datastructures {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Datastructures.BaseWindowCalculator`1<T>
class CORDL_TYPE BaseWindowCalculator_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::Dissonance::Datastructures::RingBuffer_1<T>*  _buffer;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

static inline ::Dissonance::Datastructures::BaseWindowCalculator_1<T>* New_ctor(uint32_t  size) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Update(T  added) ;

/// @brief Method Updated, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Updated(::System::Nullable_1<T>  removed, T  added) ;

constexpr ::Dissonance::Datastructures::RingBuffer_1<T>* const& __cordl_internal_get__buffer() const;

constexpr ::Dissonance::Datastructures::RingBuffer_1<T>*& __cordl_internal_get__buffer() ;

constexpr void __cordl_internal_set__buffer(::Dissonance::Datastructures::RingBuffer_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(uint32_t  size) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseWindowCalculator_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseWindowCalculator_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseWindowCalculator_1(BaseWindowCalculator_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseWindowCalculator_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseWindowCalculator_1(BaseWindowCalculator_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16935};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Datastructures::RingBuffer_1<T>*  ____buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Datastructures
