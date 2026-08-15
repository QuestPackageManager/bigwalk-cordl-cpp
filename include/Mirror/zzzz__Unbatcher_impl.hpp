#pragma once
// IWYU pragma private; include "Mirror/Unbatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__Unbatcher_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriterPooled_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Mirror::Unbatcher.get_BatchesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::Unbatcher::*)()>(&::Mirror::Unbatcher::get_BatchesCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804828f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {"get_BatchesCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Unbatcher.StartReadingBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Unbatcher::*)(::Mirror::NetworkWriterPooled*)>(&::Mirror::Unbatcher::StartReadingBatch)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181552b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {"StartReadingBatch", {}, {::i2c::type_of<::Mirror::NetworkWriterPooled*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Unbatcher.AddBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Unbatcher::*)(::System::ArraySegment_1<uint8_t>)>(&::Mirror::Unbatcher::AddBatch)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181552940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {"AddBatch", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Unbatcher.GetNextMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Unbatcher::*)(::by_ref<::Mirror::NetworkReader*>, ::by_ref<double_t>)>(&::Mirror::Unbatcher::GetNextMessage)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181552a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {"GetNextMessage", {}, {::i2c::type_of<::by_ref<::Mirror::NetworkReader*>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Unbatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Unbatcher::*)()>(&::Mirror::Unbatcher::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181552bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*& Mirror::Unbatcher::__cordl_internal_get_batches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batches;
}
constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>* const& Mirror::Unbatcher::__cordl_internal_get_batches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batches;
}
constexpr void Mirror::Unbatcher::__cordl_internal_set_batches(::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batches = value;
}
constexpr ::Mirror::NetworkReader*& Mirror::Unbatcher::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::Mirror::NetworkReader* const& Mirror::Unbatcher::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void Mirror::Unbatcher::__cordl_internal_set_reader(::Mirror::NetworkReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader = value;
}
constexpr double_t& Mirror::Unbatcher::__cordl_internal_get_readerRemoteTimeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readerRemoteTimeStamp;
}
constexpr double_t const& Mirror::Unbatcher::__cordl_internal_get_readerRemoteTimeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readerRemoteTimeStamp;
}
constexpr void Mirror::Unbatcher::__cordl_internal_set_readerRemoteTimeStamp(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readerRemoteTimeStamp = value;
}
inline int32_t Mirror::Unbatcher::get_BatchesCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {"get_BatchesCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::Unbatcher::StartReadingBatch(::Mirror::NetworkWriterPooled*  batch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {"StartReadingBatch", {}, {::i2c::type_of<::Mirror::NetworkWriterPooled*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, batch);
}
inline bool Mirror::Unbatcher::AddBatch(::System::ArraySegment_1<uint8_t>  batch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {"AddBatch", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, batch);
}
inline bool Mirror::Unbatcher::GetNextMessage(::by_ref<::Mirror::NetworkReader*>  message, ::by_ref<double_t>  remoteTimeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {"GetNextMessage", {}, {::i2c::type_of<::by_ref<::Mirror::NetworkReader*>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, remoteTimeStamp);
}
inline void Mirror::Unbatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Unbatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Unbatcher* Mirror::Unbatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Unbatcher*>());
}
// Ctor Parameters []
constexpr ::Mirror::Unbatcher::Unbatcher()   {
}
