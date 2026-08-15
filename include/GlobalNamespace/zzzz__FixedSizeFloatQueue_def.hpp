#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizeFloatQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedSizeFloatQueue)
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedSizeFloatQueue;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FixedSizeFloatQueue*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FixedSizeFloatQueue*, "", "FixedSizeFloatQueue");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FixedSizeFloatQueue
class CORDL_TYPE FixedSizeFloatQueue : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Average)) float_t  Average;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Sum)) float_t  Sum;

/// @brief Field _lastEnqueued, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastEnqueued, put=__cordl_internal_set__lastEnqueued)) float_t  _lastEnqueued;

/// @brief Field _maxSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSize, put=__cordl_internal_set__maxSize)) int32_t  _maxSize;

/// @brief Field _queue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__queue, put=__cordl_internal_set__queue)) ::System::Collections::Generic::Queue_1<float_t>*  _queue;

/// @brief Field _sum, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sum, put=__cordl_internal_set__sum)) double_t  _sum;

/// @brief Method Clear, addr 0x180482760, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Enqueue, addr 0x180482790, size 0x80, virtual false, abstract: false, final false
inline void Enqueue(float_t  value) ;

static inline ::GlobalNamespace::FixedSizeFloatQueue* New_ctor(int32_t  size) ;

/// @brief Method PeekNewest, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t PeekNewest() ;

/// @brief Method PeekOldest, addr 0x180482810, size 0x20, virtual false, abstract: false, final false
inline float_t PeekOldest() ;

constexpr float_t const& __cordl_internal_get__lastEnqueued() const;

constexpr float_t& __cordl_internal_get__lastEnqueued() ;

constexpr int32_t const& __cordl_internal_get__maxSize() const;

constexpr int32_t& __cordl_internal_get__maxSize() ;

constexpr ::System::Collections::Generic::Queue_1<float_t>* const& __cordl_internal_get__queue() const;

constexpr ::System::Collections::Generic::Queue_1<float_t>*& __cordl_internal_get__queue() ;

constexpr double_t const& __cordl_internal_get__sum() const;

constexpr double_t& __cordl_internal_get__sum() ;

constexpr void __cordl_internal_set__lastEnqueued(float_t  value) ;

constexpr void __cordl_internal_set__maxSize(int32_t  value) ;

constexpr void __cordl_internal_set__queue(::System::Collections::Generic::Queue_1<float_t>*  value) ;

constexpr void __cordl_internal_set__sum(double_t  value) ;

/// @brief Method .ctor, addr 0x180482830, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  size) ;

/// @brief Method get_Average, addr 0x1804828b0, size 0x40, virtual false, abstract: false, final false
inline float_t get_Average() ;

/// @brief Method get_Capacity, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x1804828f0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Sum, addr 0x180482910, size 0x10, virtual false, abstract: false, final false
inline float_t get_Sum() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedSizeFloatQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeFloatQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedSizeFloatQueue(FixedSizeFloatQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeFloatQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedSizeFloatQueue(FixedSizeFloatQueue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17511};

/// @brief Field _queue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<float_t>*  ____queue;

/// @brief Field _maxSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ____maxSize;

/// @brief Field _sum, offset: 0x20, size: 0x8, def value: None
 double_t  ____sum;

/// @brief Field _lastEnqueued, offset: 0x28, size: 0x4, def value: None
 float_t  ____lastEnqueued;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FixedSizeFloatQueue, ____queue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeFloatQueue, ____maxSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeFloatQueue, ____sum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeFloatQueue, ____lastEnqueued) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FixedSizeFloatQueue) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
