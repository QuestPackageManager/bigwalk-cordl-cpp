#pragma once
// IWYU pragma private; include "kcp2k/Segment.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__Segment_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
//  Writing Method size for method: ::kcp2k::Segment.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::Segment::*)(::ArrayW<uint8_t>, int32_t)>(&::kcp2k::Segment::Encode)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181452ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Segment*>(),
                        {"Encode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Segment.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Segment::*)()>(&::kcp2k::Segment::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181453050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Segment*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Segment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Segment::*)()>(&::kcp2k::Segment::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814530a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Segment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_conv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conv;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_conv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conv;
}
constexpr void kcp2k::Segment::__cordl_internal_set_conv(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conv = value;
}
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_cmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cmd;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_cmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cmd;
}
constexpr void kcp2k::Segment::__cordl_internal_set_cmd(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cmd = value;
}
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_frg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frg;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_frg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frg;
}
constexpr void kcp2k::Segment::__cordl_internal_set_frg(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frg = value;
}
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_wnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wnd;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_wnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wnd;
}
constexpr void kcp2k::Segment::__cordl_internal_set_wnd(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wnd = value;
}
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_ts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_ts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts;
}
constexpr void kcp2k::Segment::__cordl_internal_set_ts(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ts = value;
}
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_sn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sn;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_sn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sn;
}
constexpr void kcp2k::Segment::__cordl_internal_set_sn(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sn = value;
}
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_una()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___una;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_una() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___una;
}
constexpr void kcp2k::Segment::__cordl_internal_set_una(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___una = value;
}
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_resendts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resendts;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_resendts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resendts;
}
constexpr void kcp2k::Segment::__cordl_internal_set_resendts(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resendts = value;
}
constexpr int32_t& kcp2k::Segment::__cordl_internal_get_rto()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rto;
}
constexpr int32_t const& kcp2k::Segment::__cordl_internal_get_rto() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rto;
}
constexpr void kcp2k::Segment::__cordl_internal_set_rto(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rto = value;
}
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_fastack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastack;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_fastack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastack;
}
constexpr void kcp2k::Segment::__cordl_internal_set_fastack(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastack = value;
}
constexpr uint32_t& kcp2k::Segment::__cordl_internal_get_xmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xmit;
}
constexpr uint32_t const& kcp2k::Segment::__cordl_internal_get_xmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xmit;
}
constexpr void kcp2k::Segment::__cordl_internal_set_xmit(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xmit = value;
}
constexpr ::System::IO::MemoryStream*& kcp2k::Segment::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::IO::MemoryStream* const& kcp2k::Segment::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void kcp2k::Segment::__cordl_internal_set_data(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline int32_t kcp2k::Segment::Encode(::ArrayW<uint8_t>  ptr, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Segment*>(),
                        {"Encode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ptr, offset);
}
inline void kcp2k::Segment::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Segment*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::Segment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Segment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::kcp2k::Segment* kcp2k::Segment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::Segment*>());
}
// Ctor Parameters []
constexpr ::kcp2k::Segment::Segment()   {
}
