#pragma once
// IWYU pragma private; include "Mirror/Batcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__Batcher_def.hpp"
#include "Mirror/zzzz__NetworkWriterPooled_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Mirror::Batcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Batcher::*)(int32_t)>(&::Mirror::Batcher::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181535d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Batcher*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Batcher.AddMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Batcher::*)(::System::ArraySegment_1<uint8_t>, double_t)>(&::Mirror::Batcher::AddMessage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181535ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Batcher*>(),
                        {"AddMessage", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Batcher.CopyAndReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriterPooled*, ::Mirror::NetworkWriter*)>(&::Mirror::Batcher::CopyAndReturn)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181535ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Batcher*>(),
                        {"CopyAndReturn", {}, {::i2c::type_of<::Mirror::NetworkWriterPooled*>(), ::i2c::type_of<::Mirror::NetworkWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Batcher.GetBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Batcher::*)(::Mirror::NetworkWriter*)>(&::Mirror::Batcher::GetBatch)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181535c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Batcher*>(),
                        {"GetBatch", {}, {::i2c::type_of<::Mirror::NetworkWriter*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::Batcher::__cordl_internal_get_threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr int32_t const& Mirror::Batcher::__cordl_internal_get_threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr void Mirror::Batcher::__cordl_internal_set_threshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threshold = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*& Mirror::Batcher::__cordl_internal_get_batches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batches;
}
constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>* const& Mirror::Batcher::__cordl_internal_get_batches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batches;
}
constexpr void Mirror::Batcher::__cordl_internal_set_batches(::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batches = value;
}
constexpr ::Mirror::NetworkWriterPooled*& Mirror::Batcher::__cordl_internal_get_batch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batch;
}
constexpr ::Mirror::NetworkWriterPooled* const& Mirror::Batcher::__cordl_internal_get_batch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batch;
}
constexpr void Mirror::Batcher::__cordl_internal_set_batch(::Mirror::NetworkWriterPooled*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batch = value;
}
inline void Mirror::Batcher::_ctor(int32_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Batcher*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threshold);
}
inline void Mirror::Batcher::AddMessage(::System::ArraySegment_1<uint8_t>  message, double_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Batcher*>(),
                        {"AddMessage", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, timeStamp);
}
inline void Mirror::Batcher::CopyAndReturn(::Mirror::NetworkWriterPooled*  batch, ::Mirror::NetworkWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Batcher*>(),
                        {"CopyAndReturn", {}, {::i2c::type_of<::Mirror::NetworkWriterPooled*>(), ::i2c::type_of<::Mirror::NetworkWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batch, writer);
}
inline bool Mirror::Batcher::GetBatch(::Mirror::NetworkWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Batcher*>(),
                        {"GetBatch", {}, {::i2c::type_of<::Mirror::NetworkWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer);
}
inline ::Mirror::Batcher* Mirror::Batcher::New_ctor(int32_t  threshold)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Batcher*>(threshold));
}
// Ctor Parameters []
constexpr ::Mirror::Batcher::Batcher()   {
}
