#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveLogStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveLogStream_def.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveLogIndex_def.hpp"
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogStream::*)(::StringW)>(&::Shipmates::Utils::OpenObserveLogStream::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acbe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogStream*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Shipmates::Utils::OpenObserveLogIndex*& Shipmates::Utils::OpenObserveLogStream::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr ::Shipmates::Utils::OpenObserveLogIndex* const& Shipmates::Utils::OpenObserveLogStream::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Shipmates::Utils::OpenObserveLogStream::__cordl_internal_set_index(::Shipmates::Utils::OpenObserveLogIndex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void Shipmates::Utils::OpenObserveLogStream::_ctor(::StringW  passedIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogStream*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passedIndex);
}
inline ::Shipmates::Utils::OpenObserveLogStream* Shipmates::Utils::OpenObserveLogStream::New_ctor(::StringW  passedIndex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::Utils::OpenObserveLogStream*>(passedIndex));
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserveLogStream::OpenObserveLogStream()   {
}
