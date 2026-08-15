#pragma once
// IWYU pragma private; include "MA/Flora/NativeDataReference_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NativeDataReference_1)
namespace MA::Flora {
template<typename T>
struct NativeData_1;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct NativeDataReference_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::NativeDataReference_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::NativeDataReference_1, "MA.Flora", "NativeDataReference`1");
// Dependencies 
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.NativeDataReference`1<T>
struct CORDL_TYPE NativeDataReference_1 {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_ValueRO)) T  ValueRO;

 __declspec(property(get=get_ValueRW)) T  ValueRW;

/// @brief Method GetUnsafePtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T* GetUnsafePtr() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::NativeData_1<T>  data) ;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_ValueRO, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_ValueRO() ;

/// @brief Method get_ValueRW, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_ValueRW() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::MA::Flora::NativeDataReference_1<T> op_Implicit___MA__Flora__NativeDataReference_1_T_(::MA::Flora::NativeData_1<T>  data) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeDataReference_1() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "T*", modifiers: "", def_value: None }]
constexpr NativeDataReference_1(T*  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12882};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 T*  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
