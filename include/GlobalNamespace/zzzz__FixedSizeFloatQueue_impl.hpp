#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizeFloatQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FixedSizeFloatQueue_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FixedSizeFloatQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FixedSizeFloatQueue::*)(int32_t)>(&::GlobalNamespace::FixedSizeFloatQueue::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180482830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedSizeFloatQueue.PeekNewest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FixedSizeFloatQueue::*)()>(&::GlobalNamespace::FixedSizeFloatQueue::PeekNewest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"PeekNewest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedSizeFloatQueue.PeekOldest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FixedSizeFloatQueue::*)()>(&::GlobalNamespace::FixedSizeFloatQueue::PeekOldest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"PeekOldest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedSizeFloatQueue.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FixedSizeFloatQueue::*)(float_t)>(&::GlobalNamespace::FixedSizeFloatQueue::Enqueue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180482790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"Enqueue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedSizeFloatQueue.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FixedSizeFloatQueue::*)()>(&::GlobalNamespace::FixedSizeFloatQueue::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180482760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedSizeFloatQueue.get_Average
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FixedSizeFloatQueue::*)()>(&::GlobalNamespace::FixedSizeFloatQueue::get_Average)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"get_Average", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedSizeFloatQueue.get_Sum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FixedSizeFloatQueue::*)()>(&::GlobalNamespace::FixedSizeFloatQueue::get_Sum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180482910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"get_Sum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedSizeFloatQueue.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FixedSizeFloatQueue::*)()>(&::GlobalNamespace::FixedSizeFloatQueue::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804828f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedSizeFloatQueue.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FixedSizeFloatQueue::*)()>(&::GlobalNamespace::FixedSizeFloatQueue::get_Capacity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<float_t>*& GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_get__queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>* const& GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_get__queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue;
}
constexpr void GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_set__queue(::System::Collections::Generic::Queue_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queue = value;
}
constexpr int32_t& GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_get__maxSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSize;
}
constexpr int32_t const& GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_get__maxSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSize;
}
constexpr void GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_set__maxSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSize = value;
}
constexpr double_t& GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_get__sum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sum;
}
constexpr double_t const& GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_get__sum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sum;
}
constexpr void GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_set__sum(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sum = value;
}
constexpr float_t& GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_get__lastEnqueued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEnqueued;
}
constexpr float_t const& GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_get__lastEnqueued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEnqueued;
}
constexpr void GlobalNamespace::FixedSizeFloatQueue::__cordl_internal_set__lastEnqueued(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastEnqueued = value;
}
inline void GlobalNamespace::FixedSizeFloatQueue::_ctor(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline float_t GlobalNamespace::FixedSizeFloatQueue::PeekNewest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"PeekNewest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::FixedSizeFloatQueue::PeekOldest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"PeekOldest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::FixedSizeFloatQueue::Enqueue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"Enqueue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FixedSizeFloatQueue::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::FixedSizeFloatQueue::get_Average()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"get_Average", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::FixedSizeFloatQueue::get_Sum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"get_Sum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FixedSizeFloatQueue::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FixedSizeFloatQueue::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeFloatQueue*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::FixedSizeFloatQueue* GlobalNamespace::FixedSizeFloatQueue::New_ctor(int32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FixedSizeFloatQueue*>(size));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FixedSizeFloatQueue::FixedSizeFloatQueue()   {
}
