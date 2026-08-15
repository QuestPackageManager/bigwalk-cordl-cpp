#pragma once
// IWYU pragma private; include "MA/Flora/NativeScatterList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeScatterList_1)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct NativeScatterList_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::NativeScatterList_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::NativeScatterList_1, "MA.Flora", "NativeScatterList`1");
// Dependencies Unity.Collections.NativeList`1<T>
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.NativeScatterList`1<T>
struct CORDL_TYPE NativeScatterList_1 {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_HasScatters)) bool  HasScatters;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Offsets)) ::Unity::Collections::NativeArray_1<uint32_t>  Offsets;

 __declspec(property(get=get_Values)) ::Unity::Collections::NativeArray_1<T>  Values;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
constexpr operator  ::Unity::Collections::INativeDisposable*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T  value, uint32_t  offset) ;

/// @brief Method AddNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddNoResize(T  value, uint32_t  offset) ;

/// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRange(::Unity::Collections::NativeArray_1<T>  values, ::Unity::Collections::NativeArray_1<uint32_t>  offsets) ;

/// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRange(T*  values, uint32_t*  offsets, int32_t  count) ;

/// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRangeNoResize(::Unity::Collections::NativeArray_1<T>  values, ::Unity::Collections::NativeArray_1<uint32_t>  offsets) ;

/// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRangeNoResize(T*  values, uint32_t*  offsets, int32_t  count) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize(int32_t  newLength, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method TrimExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void TrimExcess() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  count, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_HasScatters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasScatters() ;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_Offsets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint32_t> get_Offsets() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> get_Values() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::Unity::Collections::INativeDisposable"
constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeScatterList_1() ;

// Ctor Parameters [CppParam { name: "m_Values", ty: "::Unity::Collections::NativeList_1<T>", modifiers: "", def_value: None }, CppParam { name: "m_Offsets", ty: "::Unity::Collections::NativeList_1<uint32_t>", modifiers: "", def_value: None }]
constexpr NativeScatterList_1(::Unity::Collections::NativeList_1<T>  m_Values, ::Unity::Collections::NativeList_1<uint32_t>  m_Offsets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12885};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Values, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<T>  m_Values;

/// @brief Field m_Offsets, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<uint32_t>  m_Offsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
