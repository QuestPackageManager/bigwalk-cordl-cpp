#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveLogIndex.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveLogIndex_def.hpp"
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogIndex::*)()>(&::Shipmates::Utils::OpenObserveLogIndex::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogIndex*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmates::Utils::OpenObserveLogIndex::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveLogIndex::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void Shipmates::Utils::OpenObserveLogIndex::__cordl_internal_set__index(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
inline void Shipmates::Utils::OpenObserveLogIndex::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogIndex*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::Utils::OpenObserveLogIndex* Shipmates::Utils::OpenObserveLogIndex::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::Utils::OpenObserveLogIndex*>());
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserveLogIndex::OpenObserveLogIndex()   {
}
