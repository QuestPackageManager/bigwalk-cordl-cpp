#pragma once
// IWYU pragma private; include "MA/Flora/NativeData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeData_1)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct NativeData_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::NativeData_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::NativeData_1, "MA.Flora", "NativeData`1");
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.NativeData`1<T>
struct CORDL_TYPE NativeData_1 {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_ValueRO)) T  ValueRO;

 __declspec(property(get=get_ValueRW)) T  ValueRW;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetUnsafePtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T* GetUnsafePtr() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_ValueRO, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_ValueRO() ;

/// @brief Method get_ValueRW, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_ValueRW() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeData_1() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
constexpr NativeData_1(T*  m_Data, ::Unity::Collections::AllocatorManager_AllocatorHandle  m_AllocatorLabel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 T*  m_Data;

/// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
 ::Unity::Collections::AllocatorManager_AllocatorHandle  m_AllocatorLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
